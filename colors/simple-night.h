/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	[0]  = "#000000",
	[1]  = "#aa0000",
	[2]  = "#00aa00",
	[3]  = "#6c3205",
	[4]  = "#4444aa",
	[5]  = "#aa00aa",
	[6]  = "#0066aa",
	[7]  = "#666666",

	[8]  = "#303030",
	[9]  = "#dd0033",
	[10] = "#48bb48",
	[11] = "#bbbb55",
	[12] = "#5555ff",
	[13] = "#bc33cc",
	[14] = "#0088ff",
	[15] = "#888888",
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 15;
unsigned int defaultbg = 0;
unsigned int defaultcs = 15;
static unsigned int defaultrcs = 257;
