/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "NULL";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
	/* function format          argument */

	{ run_command,  "^b#1f2335^^c#e0af78^  󱓉 %s ^c#bb9af7^ ", "pamixer --get-volume-human" },

	{ run_command,  "^b#090618^^c#090618^%^c#bb9af7^", "echo '▋' "},

        { cpu_perc,    "^b#1f2335^ 󰝤  %s% ^c#7aa2f7^ ", NULL },

 //       { run_command,    "^b#1f2335^  %s ^c#9ece6a^ ", "sh ~/sens.sh " },

	{ ram_perc,    "^b#1f2335^ 󰔶  %s% ^c#f7768e^ ", NULL },

//	{ netspeed_rx,    " 🔼 %s% /", "enp2s0" },

//	{ netspeed_tx,    " 🔽 %s% ]", "enp2s0" },

//        { run_command, " 🌽 %s |", "sh /home/hy/.files/scripts/statusbar/kern" },

	{ run_command,  "^b#090618^^c#1e1e2e^%^c#f7768e^", "echo '▋' "},

        { run_command, "^b#1f2335^   %s ^c#eabbb9^", "sh /home/hy/.cystem/slstatus/shellmodules/pacman" },

	{ run_command,  "^b#090618^^c#1e1e2e^%^c#eabbb9^", "echo '▋' "},

        { run_command, "^b#1f2335^ %s ^c#eabbb9^ ", "sh /home/hy/.cystem/slstatus/shellmodules/bluetooth" },

	{ run_command,  "^b#090618^^c#1e1e2e^%^c#f7768e^", "echo '▋' "},

//        { run_command, "^b#1f2335^ %s^c#9bced7^ ", "sh /home/hy/.cystem/slstatus/shellmodules/weather" },

//        { run_command, " 💽 %s |", "sh /home/hy/.files/scripts/statusbar/disk" },

        { run_command, "^b#1f2335^^c#98BB6C^ 󰜁  %s ", "sh /home/hy/.cystem/slstatus/shellmodules/time" },

};

