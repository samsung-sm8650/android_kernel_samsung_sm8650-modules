#ifndef HI847_OTP_H
#define HI847_OTP_H


#define SENSOR_HI847_OTP_BANK_SELECT_REGISTER			        0x0700

struct cam_sensor_i2c_reg_array load_sensor_hi847_otp_setfile_reg[] = {
 {0x0B00,	0x0000},
 {0x0790,	0x0100},
 {0x2000,	0x1001},
 {0x2002,	0x007F},
 {0x2006,	0x4130},
 {0x3800,	0x0000},
 {0x3802,	0x0000},
 {0x3804,	0x0000},
 {0x3806,	0x0000},
 {0x3808,	0x0000},
 {0x380A,	0x0000},
 {0x380C,	0x0000},
 {0x026A,	0xFFFF},
 {0x026C,	0x00FF},
 {0x026E,	0x0000},
 {0x0360,	0x1E8E},
 {0x040E,	0x01EB},
 {0x0600,	0x1130},
 {0x0602,	0x3112},
 {0x0604,	0x8048},
 {0x0606,	0x00E9},
 {0x067A,	0x0404},
 {0x067C,	0x0404},
 {0x06A8,	0x0240},
 {0x06AA,	0x00CA},
 {0x06AC,	0x0041},
 {0x06B4,	0x3FFF},
 {0x06DE,	0x0404},
 {0x06E0,	0x0404},
 {0x06E2,	0xFF00},
 {0x06E4,	0x8333},
 {0x06E6,	0x8333},
 {0x06E8,	0x8333},
 {0x06EA,	0x8333},
 {0x052A,	0x0000},
 {0x052C,	0x0000},
 {0x0F06,	0x0002},
 {0x0A04,	0xB4C5},
 {0x0A06,	0xC400},
 {0x0A08,	0x988A},
 {0x0A0A,	0xA387},
 {0x0A0E,	0xEEC0},
 {0x0A12,	0x0000},
 {0x0A18,	0x0010},
 {0x0A1C,	0x0040},
 {0x0A20,	0x0015},
 {0x0C00,	0x0021},
 {0x0C16,	0x0002},
 {0x0708,	0x6FC0},
 {0x070C,	0x0000},
 {0x1244,	0x0000},
 {0x105C,	0x0F0B},
 {0x1958,	0x0000},
 {0x195A,	0x004C},
 {0x195C,	0x0097},
 {0x195E,	0x0221},
 {0x1960,	0x03FE},
 {0x1980,	0x00E0},
 {0x1982,	0x0010},
 {0x1984,	0x2018},
 {0x1986,	0x0008},
 {0x1988,	0x0000},
 {0x198A,	0x0000},
 {0x198C,	0x0880},
 {0x198E,	0x0000},
 {0x1990,	0x1A00},
 {0x1992,	0x0000},
 {0x1994,	0x2800},
 {0x1996,	0x0002},
 {0x1962,	0x0000},
 {0x1964,	0x004C},
 {0x1966,	0x0097},
 {0x1968,	0x0221},
 {0x196A,	0x03FE},
 {0x19C0,	0x00E0},
 {0x19C2,	0x0010},
 {0x19C4,	0x2018},
 {0x19C6,	0x0008},
 {0x19C8,	0x0000},
 {0x19CA,	0x0000},
 {0x19CC,	0x0880},
 {0x19CE,	0x0000},
 {0x19D0,	0x1A00},
 {0x19D2,	0x0000},
 {0x19D4,	0x2800},
 {0x19D6,	0x0002},
 {0x196C,	0x0000},
 {0x196E,	0x004C},
 {0x1970,	0x0097},
 {0x1972,	0x0221},
 {0x1974,	0x03FE},
 {0x1A00,	0x00E0},
 {0x1A02,	0x0010},
 {0x1A04,	0x2018},
 {0x1A06,	0x0008},
 {0x1A08,	0x0000},
 {0x1A0A,	0x0000},
 {0x1A0C,	0x0880},
 {0x1A0E,	0x0000},
 {0x1A10,	0x1A00},
 {0x1A12,	0x0000},
 {0x1A14,	0x2800},
 {0x1A16,	0x0002},
 {0x1976,	0x0000},
 {0x1978,	0x004C},
 {0x197A,	0x0097},
 {0x197C,	0x0221},
 {0x197E,	0x03FE},
 {0x1A40,	0x00E0},
 {0x1A42,	0x0010},
 {0x1A44,	0x2018},
 {0x1A46,	0x0008},
 {0x1A48,	0x0000},
 {0x1A4A,	0x0000},
 {0x1A4C,	0x0880},
 {0x1A4E,	0x0000},
 {0x1A50,	0x1A00},
 {0x1A52,	0x0000},
 {0x1A54,	0x2800},
 {0x1A56,	0x0002},
 {0x192A,	0x0201},
 {0x0384,	0x0000},
 {0x027E,	0x0100},
 {0x0204,	0x0000},
 {0x0206,	0x033C},
 {0x020A,	0x0B26},
 {0x020E,	0x0B2A},
 {0x0214,	0x0200},
 {0x0216,	0x0200},
 {0x0218,	0x0200},
 {0x021A,	0x0200},
 {0x0224,	0x00B6},
 {0x022A,	0x0017},
 {0x022C,	0x0E1F},
 {0x022E,	0x0939},
 {0x0234,	0x1111},
 {0x0236,	0x1111},
 {0x0238,	0x1111},
 {0x023A,	0x1111},
 {0x0250,	0x0000},
 {0x0252,	0x0006},
 {0x0254,	0x0000},
 {0x0256,	0x0000},
 {0x0258,	0x0000},
 {0x025A,	0x0000},
 {0x025C,	0x0000},
 {0x025E,	0x0202},
 {0x0268,	0x00CB},
 {0x0440,	0x001D},
 {0x0F00,	0x0000},
 {0x0F04,	0x00C0},
 {0x0B02,	0x0100},
 {0x0B04,	0x00DC},
 {0x0B12,	0x0B50},
 {0x0B14,	0x0880},
 {0x0B20,	0x0100},
 {0x1100,	0x1100},
 {0x1102,	0x0008},
 {0x1108,	0x0002},
 {0x1118,	0x0086},
 {0x0A10,	0xB040},
 {0x0C14,	0x00C0},
 {0x0C18,	0x0B50},
 {0x0C1A,	0x0880},
 {0x0730,	0x0001},
 {0x0732,	0x0000},
 {0x0734,	0x0300},
 {0x0736,	0x004A},
 {0x0738,	0x0001},
 {0x073C,	0x0900},
 {0x0740,	0x0000},
 {0x0742,	0x0000},
 {0x0744,	0x0300},
 {0x0746,	0x005F},
 {0x0748,	0x0001},
 {0x074A,	0x0900},
 {0x074C,	0x0000},
 {0x074E,	0x0100},
 {0x0750,	0x0000},
 {0x1200,	0x0526},
 {0x1202,	0x0E00},
 {0x120E,	0xF027},
 {0x1210,	0x8027},
 {0x1246,	0x0102},
 {0x1000,	0x0300},
 {0x1002,	0xC311},
 {0x1004,	0x2BAB},
 {0x1010,	0x0100},
 {0x1012,	0x015E},
 {0x1014,	0x006E},
 {0x1016,	0x006E},
 {0x101A,	0x006E},
 {0x1020,	0xC107},
 {0x1022,	0x0922},
 {0x1024,	0x0409},
 {0x1026,	0x0C0C},
 {0x1028,	0x150A},
 {0x102A,	0x0D0A},
 {0x102C,	0x1700},
 {0x1038,	0x1100},
 {0x103E,	0x0001},
 {0x1040,	0x0000},
 {0x1042,	0x0108},
 {0x1044,	0x00B4},
 {0x1046,	0x0004},
 {0x1048,	0x00B4},
 {0x1066,	0x0100},
 {0x1600,	0xE000},
 {0x1608,	0x00C8},
 {0x160A,	0x0B40},
 {0x160C,	0x0002},
 {0x160E,	0x0880},
 {0x0B00, 0x0100},
 {0x0B00, 0x0000},
 {0x027E, 0x0000},
 {0x0700, 0x0117},
 {0x0700, 0x0017},
 {0x0790, 0x0100},
 {0x2000, 0x0001},
 {0x2002, 0x0058},
 {0x2006, 0x1292},
 {0x2008, 0x8446},
 {0x200A, 0x90F2},
 {0x200C, 0x0010},
 {0x200E, 0x0260},
 {0x2010, 0x23FC},
 {0x2012, 0x1292},
 {0x2014, 0x84BC},
 {0x2016, 0x3FF9},
 {0x2018, 0x4130},
 {0x0708, 0xEF82},
 {0x070C, 0x0000},
 {0x0732, 0x0300},
 {0x0734, 0x0300},
 {0x0736, 0x0064},
 {0x0738, 0x0003},
 {0x0742, 0x0300},
 {0x0746, 0x00FA},
 {0x0748, 0x0003},
 {0x074C, 0x0000},
 {0x0266, 0x0000},
 {0x0360, 0x2C8E},
 {0x027E, 0x0100},
 {0x0B00, 0x0000},
};


struct cam_sensor_i2c_reg_array hi847_otp_init_reg1[] = {
	{0x0B00, 0x00, 0},
	{0x027E, 0x00, 0},
};

struct cam_sensor_i2c_reg_array hi847_otp_init_reg2[] = {
	{0x0260, 0x10, 0},
	{0x027E, 0x01, 0},
	{0x0B00, 0x01, 0}, 
};

struct cam_sensor_i2c_reg_array hi847_otp_finish_reg1[] = {
	{0x0B00, 0x00, 0},
	{0x027E, 0x00, 0},
};

struct cam_sensor_i2c_reg_array hi847_otp_finish_reg2[] = {
	{0x0260, 0x00, 0},
	{0x027E, 0x01, 0},
	{0x0B00, 0x01, 0}, 
};

#endif /* HI847_OTP_H */