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