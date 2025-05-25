//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/											/*Update Interval*/	/*Update Signal*/
   {"",		"button-test",								0,	10},
    {" ",		"brightnessctl -m | awk -F , '{print $4}'",						10,	0},
    {"  ",		"setxkbmap -query | grep layout | sed 's/layout: *//g'",				120,	0},
    {" ",		"df -h / | awk 'NR==2 {printf \"Porn folder: %dG/%dG\", $3, $2}'",			120,	0},
    {"󰁹 ",		"echo \"$(cat /sys/class/power_supply/BAT0/capacity)\"%",				60,	0},
    {"",		"date '+%b %d (%a) %I:%M%p'",								60,	0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
