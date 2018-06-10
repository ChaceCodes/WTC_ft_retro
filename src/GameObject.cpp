#include "GameObject.hpp"
#include <ncurses.h>

GameObject::GameObject( void ) {
	this->state = 0;
}

GameObject::GameObject ( const GameObject & srcObj ) {
	this->operator=( srcObj );
}

GameObject & GameObject::operator=( const GameObject & srcObj ) {
	this->maxX = srcObj.maxX;
	return (*this);
}

GameObject::~GameObject( void ) {

}

GameObject::GameObject( int maxX, int maxY){
	this->maxX = maxX;
	this->maxY = maxY;
}

int     GameObject::getPosX( void ) {
	return (this->x);
}

int     GameObject::getPosY( void ) {
	return (this->y);
}

void	GameObject::activate( int x, int y ) {
	this->x = x;
	this->y = y;
	this->state = 1;
}

int    	GameObject::isActive( void ) {
	return (this->state);
}

void    GameObject::updatePos( int x, int y ) {
	this->x += x;
	this->y += y;
}

void	GameObject::drawSelf( void ){
	int c;
	if (this->chr == '>')
		c = 1;
	else if (this->chr == '<')
		c = 2;
	else if (this->chr == '-')
		c = 3;
	else
		c = 4;
	attron(COLOR_PAIR(c));
	mvprintw(this->y, this->x, "%c>", this->chr);
	attroff(COLOR_PAIR(c));
}

int		GameObject::selfCollision( int x, int y ){
	if (this->x == x && this->y == y)
		return (1);
	return (0);
}

void	GameObject::deactivate( void ) {
	this->state = 0;
	//mvaddch(this->y, this->x, ' ');//experimental
}