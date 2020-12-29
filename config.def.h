//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "battery", 10, 3},
	{"", "cpu", 10, 18},
	{"", "memory", 10, 14},
	{"", "clock", 30, 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " | ";

