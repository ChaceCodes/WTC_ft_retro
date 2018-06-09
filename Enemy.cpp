#include "Enemy.hpp"
#include <string>

Enemy::Enemy( void ) {
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

Enemy::Enemy(int maxX, int maxY){
	this->maxX = maxX;
	this->maxY = maxY;
	this->x = this->maxX - 5;
	this->y = this->maxY - 5;
	this->chr = '@';
}