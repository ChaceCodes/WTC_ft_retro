#include "Arena.hpp"
#include "ObjectManager.hpp"

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
	getmaxyx(stdscr, this->maxY, this->maxX); // move inside loop to make dynamically sized window
	keypad(stdscr, TRUE);
	noecho();
	nodelay(stdscr, TRUE);
	curs_set(FALSE);
	raw();
	// if(has_colors() == FALSE)
	// {	endwin();
	// 	printf("Your terminal does not support color\n");
	// 	exit();
	// }
	// start_color();	
	// init_pair(1, COLOR_GREEN, COLOR_BLACK);

	this->OM = new  ObjectManager(this->maxX, this->maxY); // ObjectManager instance
}

void	Arena::gameLoop( void ){

	int ch = 0;
	int quit = 0;
	int y = 1;
	int score = 0;

	int lc = 0; // character map for scrolling top and bottom
	int display = 0; // loop counter for scrolling top and bottom

	while (!quit){
		clear();
		box( stdscr, 0, 0);
		printLines(&lc, score);
		score += 50;
		if (display == 3){ lc += ((lc >= 2) ? -2 : 1 ); display = 0; }
		else { display++; }

		this->OM->enemySpawner( 1, 1); //meaningless values right now
		this->OM->collisionManager();
		this->OM->moveManager();
		this->OM->drawManager();
		this->OM->objectCleaner();

		refresh();
		ch = getch();

		switch (ch) {
			case KEY_LEFT:
				this->OM->player->updatePos(-1, 0);
				break;
			case KEY_RIGHT:
				this->OM->player->updatePos(1, 0);
				break;
			case KEY_UP:
				this->OM->player->updatePos(0, -1);
				break;
			case KEY_DOWN:
				this->OM->player->updatePos(0, 1);
				break;
			case 'q':
				quit = 1;
				break; //DEBUG
			case ' ':
				this->OM->playerFire();
				break;
		}
		usleep(30000);
	}
}

void	Arena::exit( void ){
	endwin();
}

void	Arena::printLines(int *lc, int score)
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
		char1 = '_';
		char2 = '/';;
		char3 = '\\';
	}
	else if (*lc == 2)
	{
		char1 = '/';
		char2 = '\\';
		char3 = '_';
	}
	for (int i = 1; i < this->maxX-3; i++)
	{
		mvaddch(1, i, char1);
		mvaddch(this->maxY-4, i++, char1);
		mvaddch(1, i, char2);
		mvaddch(this->maxY-4, i++, char2);
		mvaddch(1, i, char3);
		mvaddch(this->maxY-4, i, char3);
		//usleep ( 1000 );
	}

	mvprintw(this->maxY-2, 1, "SCORE: %i	TIME: %i", score/2, score/1300);
}