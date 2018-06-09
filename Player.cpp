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

Player::Player(int maxX, int maxY){
	this->maxX = maxX;
	this->maxY = maxY;
}

void	Player::updatePos(int x, int y){
	if (x > 0)
	{
		if (this->x + x == maxX)
		{
			return;
		}		
		else
			this->x += x;
	}
	if (x < 0)
	{
		if (this->x + x == 0)
		{
			return;
		}
		else
			this->x += x;
	}
	if (y > 0)
	{
		if (this->y + y == maxY)
		{
			return;
		}		
		else
			this->y += y;
	}
	if (y < 0)
	{
		if (this->y + y == 0)
		{
			return;
		}
		else
			this->y += y;
	}
}