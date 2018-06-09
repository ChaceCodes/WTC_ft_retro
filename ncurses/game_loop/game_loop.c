#include <ncurses.h>

int main()
{
	int ch = 0;

	initscr();
	refresh();
	noecho();
	raw();
	while (1)
	{
		ch = wgetch(stdscr);
		if (ch == KEY_DOWN)
			printw("keydown");
		else
			printw("nah");
		refresh();
		ch = 0;
	}
	endwin();
	return (0);
}
