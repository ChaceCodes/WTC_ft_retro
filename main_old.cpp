#include "Player.hpp"
#include <ncurses.h>
#include <unistd.h>

int	main()
{
	Player plr;

	int	quit = 0;
	int	scrX = 0;
	int	scrY = 0;
	int	ch = 0;

	// init ncurses
	initscr();
	keypad(stdscr, TRUE);
	noecho();
	curs_set(FALSE);
	raw();
	getmaxyx(stdscr, scrY, scrX);
	
	// game loop
	while (!quit){
		clear();
		box( stdscr, 0, 0);
		mvprintw(plr.y, plr.x, ">");
		refresh();
		usleep(50000); // includes c library
		ch = getch();
		switch (ch) {
			case KEY_LEFT:
				plr.x -= 4;
				break;
			case KEY_RIGHT:
				plr.x++;
				break;
			case KEY_UP:
				plr.y--;
				break;
			case KEY_DOWN:
				plr.y++;
				break;
			case 'q':
				quit = 1;
				break;
		}
	}
	endwin();
	return (0);
}