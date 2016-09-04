#include <iostream>
#include <ncurses.h>


int main()
{

	initscr();

	int nlines = 32, ncols = 32;
	int y0 = 0, x0 = 0;

	WINDOW * win = newwin(nlines, ncols, y0, x0);

	wrefresh(win);

	return 0;
}