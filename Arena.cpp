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
	curs_set(FALSE);
	raw();
	getmaxyx(stdscr, this->maxY, this->maxX);
}

void	Arena::gameLoop( void ){

	getch();
}

void	Arena::exit( void ){
	endwin();
}