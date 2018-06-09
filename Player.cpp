#include "Player.hpp"
#include <string>

Player::Player( void ) {
	this->x = 5;
	this->y = 5;
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