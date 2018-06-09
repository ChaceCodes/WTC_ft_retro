#include "Player.hpp"
#include <string>

Player::Player( void ) {
	this->x = 0;
	this->y = 0;
	this->chr = ">";
}

Player::Player( const Player & srcObj ) {
	this->operator=( srcObj );
}

Player & Player::operator=( const Player & srcObj ) {
	this->x = srcObj.x;
	this->y = srcObj.y;
	return (*this);
}

Player::~Player( void ) {

}