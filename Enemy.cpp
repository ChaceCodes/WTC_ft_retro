#include "Enemy.hpp"
#include <string>

Enemy::Enemy( void ) {
	this->x = 0;
	this->y = 0;
	this->chr = ">";
}

Enemy::Enemy( const Enemy & srcObj ) {
	this->operator=( srcObj );
}

Enemy & Enemy::operator=( const Enemy & srcObj ) {
	this->x = srcObj.x;
	this->y = srcObj.y;
	return (*this);
}

Enemy::~Enemy( void ) {

}