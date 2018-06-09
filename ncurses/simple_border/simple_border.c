#include <ncurses.h>

int main()
{
	int ch;
	initscr();			/* Start curses mode 		  */
	printw("Hello World !!!");	/* Print Hello World		  */
	box(stdscr, 0, 0);
	refresh();			/* Print it on to the real screen */
	ch = getch();
	endwin();			/* End curses mode		  */

	return 0;
}
