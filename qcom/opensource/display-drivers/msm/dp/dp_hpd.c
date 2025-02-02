// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (c) 2021-2022, Qualcomm Innovation Center, Inc. All rights reserved.
 * Copyright (c) 2012-2021, The Linux Foundation. All rights reserved.
 */

#include <linux/slab.h>
#include <linux/device.h>
#include <linux/delay.h>
#include <linux/err.h>

#include "dp_hpd.h"
#include "dp_altmode.h"
#include "dp_usbpd.h"
#include "dp_gpio_hpd.h"
#include "dp_lphw_hpd.h"
#include "dp_debug.h"
#include "dp_bridge_hpd.h"
#if defined(CONFIG_SECDP)
#include "secdp.h"
#endif

static void dp_hpd_host_init(struct dp_hpd *dp_hpd,
		struct dp_catalog_hpd *catalog)
{
	if (!catalog) {
		DP_ERR("invalid input\n");
		return;
	}
	catalog->config_hpd(catalog, true);
}

static void dp_hpd_host_deinit(struct dp_hpd *dp_hpd,
		struct dp_catalog_hpd *catalog)
{
	if (!catalog) {
		DP_ERR("invalid input\n");
		return;
	}
	catalog->config_hpd(catalog, false);
}

static void dp_hpd_isr(struct dp_hpd *dp_hpd)
{
}

struct dp_hpd *dp_hpd_get(struct device *dev, struct dp_parser *parser,
		struct dp_catalog_hpd *catalog,
		struct dp_aux_bridge *aux_bridge,
		struct dp_hpd_cb *cb)
{
	struct dp_hpd *dp_hpd = NULL;

	if (aux_bridge && (aux_bridge->flag & DP_AUX_BRIDGE_HPD)) {
		dp_hpd = dp_bridge_hpd_get(dev, cb, aux_bridge);
		if (!IS_ERR(dp_hpd)) {
			dp_hpd->type = DP_HPD_BRIDGE;
			goto config;
		}
	}

	dp_hpd = dp_lphw_hpd_get(dev, parser, catalog, cb);
	if (!IS_ERR_OR_NULL(dp_hpd)) {
		dp_hpd->type = DP_HPD_LPHW;
		goto config;
	}

	dp_hpd = dp_gpio_hpd_get(dev, cb);
	if (!IS_ERR_OR_NULL(dp_hpd)) {
		dp_hpd->type = DP_HPD_GPIO;
		goto config;
	}

	dp_hpd = dp_altmode_get(dev, cb);
	if (!IS_ERR_OR_NULL(dp_hpd)) {
		dp_hpd->type = DP_HPD_ALTMODE;
		goto config;
	}

	dp_hpd = dp_usbpd_get(dev, cb);
	if (!IS_ERR_OR_NULL(dp_hpd)) {
		dp_hpd->type = DP_HPD_USBPD;
		goto config;
	}

	DP_ERR("Failed to detect HPD type\n");
	goto end;

config:
	if (!dp_hpd->host_init)
		dp_hpd->host_init	= dp_hpd_host_init;
	if (!dp_hpd->host_deinit)
		dp_hpd->host_deinit	= dp_hpd_host_deinit;
	if (!dp_hpd->isr)
		dp_hpd->isr		= dp_hpd_isr;

end:
	return dp_hpd;
}

void dp_hpd_put(struct dp_hpd *dp_hpd)
{
	if (!dp_hpd)
		return;

	switch (dp_hpd->type) {
	case DP_HPD_USBPD:
		dp_usbpd_put(dp_hpd);
		break;
	case DP_HPD_ALTMODE:
		dp_altmode_put(dp_hpd);
		break;
	case DP_HPD_GPIO:
		dp_gpio_hpd_put(dp_hpd);
		break;
	case DP_HPD_LPHW:
		dp_lphw_hpd_put(dp_hpd);
		break;
	case DP_HPD_BRIDGE:
		dp_bridge_hpd_put(dp_hpd);
		break;
	default:
		DP_ERR("unknown hpd type %d\n", dp_hpd->type);
		break;
	}
}
