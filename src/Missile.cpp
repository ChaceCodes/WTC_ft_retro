#include "Missile.hpp"
#include <string>

Missile::Missile( void ) {
	this->state = 0;
	this->chr = '-';
}

Missile::Missile( const Missile & srcObj ) {
	this->operator=( srcObj );
}

Missile & Missile::operator=( const Missile & srcObj ) {
	this->x = srcObj.x;
	this->y = srcObj.y;
	return (*this);
}

Missile::~Missile( void ) {

}