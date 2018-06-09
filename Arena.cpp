#include "Arena.hpp"

Arena::Arena( void ) {;

}

Arena::Arena ( const Arena & srcObj ) {
	this->operator=( srcObj );
}

Arena & Arena::operator=( const Arena & srcObj ) {
	return (*this);
}

Arena::~Arena( void ) {

}

void	Arena::initialise( void ){
	initscr();
	keypad(stdscr, TRUE);
	noecho();
	nodelay(stdscr, TRUE);
	curs_set(FALSE);
	raw();
	getmaxyx(stdscr, this->maxY, this->maxX);
}

void	Arena::gameLoop( void ){
	int ch = 0;
	int quit = 0;
	int y = 1;
	Player player1(this->maxX, this->maxY);
	Enemy enemy1( this->maxX, this->maxY );
	//mvaddch( player1.y, player1.x, '>');
	player1.drawSelf();
	int lc = 0;
	int display = 0;
	while (!quit){
			clear();
			box( stdscr, 0, 0);
			printLines(&lc);
		if (display == 80)
		{
			lc++;
			display = 0;
		}
		else
			display++;
			//mvaddch( player1.y, player1.x, '>');
			enemy1.updatePos( -1, 0 );
			enemy1.drawSelf();
			player1.drawSelf();
			refresh();
			ch = getch();
 
			switch (ch) {
				case KEY_LEFT:
					player1.updatePos(-1, 0);
					break;
				case KEY_RIGHT:
					player1.updatePos(1, 0);
					break;
				case KEY_UP:
					player1.updatePos(0, -1);
					break;
				case KEY_DOWN:
					player1.updatePos(0, 1);
					break;
				case 'q':
					quit = 1;
					break;
			}
		usleep(1000);
	}
		
}

void	Arena::exit( void ){
	endwin();
}

void	Arena::printLines(int *lc )
{
	char char1;
	char char2;
	char char3;
	if (*lc == 0)
	{
		char1 = '\\';
		char2 = '_';
		char3 = '/';
	}
	else if (*lc == 1)
	{
		char3 = '\\';
		char1 = '_';
		char2 = '/';;
	}
	else if (*lc == 2)
	{
		char2 = '\\';
		char3 = '_';
		char1 = '/';
		*lc = 0;
	}
	for (int i = 1; i < this->maxX-3; i++)
	{
		mvaddch(1, i, char1);
		mvaddch(this->maxY-2, i++, char1);
		mvaddch(1, i, char2);
		mvaddch(this->maxY-2, i++, char2);
		mvaddch(1, i, char3);
		mvaddch(this->maxY-2, i, char3);
		//usleep ( 1000 );
	}
}