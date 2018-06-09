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
	//mvaddch( player1.y, player1.x, '>');
	player1.drawSelf();
	while (!quit){
			clear();
			box( stdscr, 0, 0);
			//printLine("_/|\\_");
			//mvaddch( player1.y, player1.x, '>');
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

// void	Arena::printLine(std::string charComb)
// {
// 	for (int i = 1; i < this->maxX; i += charComb.size)
// 	{
// 		mvprintw(1, i, charComb);
// 	}
// }