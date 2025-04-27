//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/											/*Update Interval*/	/*Update Signal*/
    {"",		"echo \"$(brightnessctl g)\"%",										10,	0},
    {"",		"setxkbmap -query | grep layout | sed 's/layout: *//g'",							120,	0},
    {"",		"df -h / | awk 'NR==2 {printf \"Porn folder: %dG/%dG\", $3, $2}'",							120,	0},
    {"󰁹",		"upower -i /org/freedesktop/UPower/devices/battery_BAT0 | grep 'percentage:'| sed 's/ *percentage: *//'",	30,	0},
    {"",		"date '+%b %d (%a) %I:%M%p'",											5,	0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
