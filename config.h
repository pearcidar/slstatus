/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "NOINFO";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
	/* function format          argument */

	{ run_command,  "^b#e0af68^^c#15161e^  墳 %s ^c#15161e^ ", "pamixer --get-volume-human" },

        { cpu_perc,    "^b#bb9af6^   %s% ", NULL },

	{ ram_perc,    "^b#f7768e^  %s% ", NULL },

//	{ netspeed_rx,    " 🔼 %s% /", "enp2s0" },

//	{ netspeed_tx,    " 🔽 %s% ]", "enp2s0" },

//        { run_command, " 🌽 %s |", "sh /home/pear/.files/scripts/statusbar/kern" },

        { run_command, "^b#9ece6a^   %s ", "sh /home/pear/.files/scripts/statusbar/pacman" },

        { run_command, "^b#7dcfff^  %s ", "sh /home/pear/.files/scripts/statusbar/weather" },

//        { run_command, " 💽 %s |", "sh /home/pear/.files/scripts/statusbar/disk" },

        { run_command, "^b#7aa2f7^   %s ", "sh /home/pear/.files/scripts/statusbar/time" },

};

