//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"   ", "echo \"$(cat /sys/class/power_supply/BAT0/capacity)%\"", 15, 0},

  {" " , "curl -s 'wttr.in/Jakarta?format=%t'", 300, 0},

	{" " , "date '+%A, %-d %b %Y'", 60, 0},
	{" ", "date '+%H:%M  '", 5, 0},

};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "  ┇  ";
static unsigned int delimLen = 7;
