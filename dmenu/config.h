/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int instant = 0;                     /* -n  option; if 1, select single entry automatically */
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 450;                    /* minimum width when centered */
static const float menu_height_ratio = 2.2f;  /* This is the ratio used in the original calculation */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
/* X resources to load at startup */
static const XResPref resources[] = {
	/* name                  type     address */
	{ "dmenu.font",          STRING,  &fonts[0] },
	{ "dmenu.prompt",        STRING,  &prompt },
	{ "dmenu.foreground",    STRING,  &colors[SchemeNorm][ColFg] },
	{ "dmenu.background",    STRING,  &colors[SchemeNorm][ColBg] },
	{ "dmenu.foregroundSel", STRING,  &colors[SchemeSel][ColFg] },
	{ "dmenu.backgroundSel", STRING,  &colors[SchemeSel][ColBg] },
	{ "dmenu.foregroundOut", STRING,  &colors[SchemeOut][ColFg] },
	{ "dmenu.backgroundOut", STRING,  &colors[SchemeOut][ColBg] },
	{ "dmenu.topbar",        INTEGER, &topbar },
	{ "dmenu.lines",         INTEGER, &lines },
};
