//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	//{"",	"music",	0,	11},
	//{"",	"pacpackages",	0,	8},
	/* {"",	"crypto",	0,	13}, */
	//{"",	"torrent",	20,	7},
	//{"",	"news",		0,	6},
	/* {"",	"memory",	10,	14}, */
	/* {"",	"cpu",		10,	13}, */
	/* {"",	"moonphase",	18000,	5}, */
	{"",	"weather",	18000,	5},
	{"",	"sticky-block",	60,	7},
	//{"",	"mailbox",	180,	12},
	{"",	"volume-check",	0,	1},
	{"",	"wifi",	500,	6},
	{"",	"backlight",	1,	2},
	{"",	"power",	5,	4},
	{"",	"clock",	60,	3},
	//{"",	"help",		0,	15},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
