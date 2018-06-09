#include "ObjectManager.hpp"
#include <ncurses.h>

ObjectManager::ObjectManager( void ) {
}

ObjectManager::ObjectManager ( const ObjectManager & srcObj ) {
	this->operator=( srcObj );
}

ObjectManager & ObjectManager::operator=( const ObjectManager & srcObj ) {
	return (*this);
}

ObjectManager::~ObjectManager( void ) {
	delete [] this->player;
	delete [] this->enemy;
	delete [] this->missile;
	delete [] this->enemy_missile;
}

ObjectManager::ObjectManager( int maxX, int maxY){
	this->maxX = maxX;
	this->maxY = maxY;
	this->player = new Player( maxX, maxY );
	this->enemy = new Enemy[10];
	this->missile = new Missile[10];
	this->enemy_missile = new Missile[100];
}

void	ObjectManager::playerFire( void ) {
	int i = -1;

	while (++i < 100){
		if (missile[i].isActive() == 0){
			missile[i].activate( this->player->getPosX() + 1, this->player->getPosY() );
			return;
		}
	}
}

void	ObjectManager::enemyFire( int x, int y ) {

}

Player *ObjectManager::getPlayer( void ) {
	return(this->player);
}

void	ObjectManager::collisionManager( void ) {
	//loops through arrays of alive enemy_missiles, enemies and bullets
}

void	ObjectManager::moveManager( void ) {
	//loops through arrays of alive enemy_missiles, enemies and bullets	
	int	i = -1;
	while (++i < 100){
		if (this->missile[i].isActive()){
			this->missile[i].updatePos( 1, 0 );
		}
	}
}

void	ObjectManager::drawManager( void ) {
	//loops through arrays of alive enemy_missiles, enemies and bullets
	int i = -1;
	this->player->drawSelf();
	while (++i < 100){
		if (this->missile[i].isActive())
			this->missile[i].drawSelf();
	}
}

int     ObjectManager::getMaxX( void ) {
	return (this->maxX);
}

int     ObjectManager::getMaxY( void ) {
	return (this->maxY);
}