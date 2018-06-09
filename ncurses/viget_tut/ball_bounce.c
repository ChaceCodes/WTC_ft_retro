#include <ncurses.h>
#include <unistd.h>

#define DELAY 30000

int main(int argc, char *argv[]) {
	int x = 0, y = 0;
	int max_y = 0, max_x = 0;
	int next_x = 0;
	int direction = 1;
	int	ch;
	int quit = 0;

	initscr();
	keypad(stdscr, TRUE);
	noecho();
	curs_set(FALSE);
	raw();

	// Global var `stdscr` is created by the call to `initscr()`
	getmaxyx(stdscr, max_y, max_x);

	while(quit == 0) {
		clear();
		mvprintw(y, x, "o");
		refresh();

		//usleep(DELAY);

		/*next_x = x + direction;

		  if (next_x >= max_x || next_x < 0) {
		  direction*= -1;
		  } else {
		  x+= direction;
		  }*/
		ch = getch();
		switch (ch)        {
			case KEY_LEFT:
				x--;
				break;
			case KEY_RIGHT:
				x++;
				break;
			case KEY_UP:
				y--;
				break;
			case KEY_DOWN:
				y++;
				break;
			case 'q':
				quit = 1;
				break;	
		}
	}
	endwin();
	return(0);
}
