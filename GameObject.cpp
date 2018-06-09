#include "GameObject.hpp"
#include <ncurses.h>

GameObject::GameObject( void ) {
	this->state = 0;
}

GameObject::GameObject ( const GameObject & srcObj ) {
	this->operator=( srcObj );
}

GameObject & GameObject::operator=( const GameObject & srcObj ) {
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
	mvaddch(this->y, this->x, this->chr);
}