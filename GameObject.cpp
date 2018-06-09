#include "GameObject.hpp"

GameObject::GameObject( void ) {
	this->x = 1;
	this->y = 1;

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

void    GameObject::updatePos( int x, int y ) {
	this->x += x;
	this->y += y;
}

void	GameObject::fire( int direction ) {
	return;
}