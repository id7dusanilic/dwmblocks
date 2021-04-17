//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
	{"",     "~/software/dwmblocks/scripts/memory",    5,    1},

	{"",     "~/software/dwmblocks/scripts/volume",    0,    10},

	{"",     "~/software/dwmblocks/scripts/battery",   5,    11},

	{"",     "~/software/dwmblocks/scripts/date",      3600, 12},

	{"",     "~/software/dwmblocks/scripts/clock",     60,   0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
