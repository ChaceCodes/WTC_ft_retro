#ifndef OBJECTMANAGER_H
# define OBJECTMANAGER_H

# include "Player.hpp"
# include "Enemy.hpp"
# include "Missile.hpp"
# include <string>

class ObjectManager {


public:

	Player *player;
	Enemy *enemy;
	Missile *missile;
	Missile *enemy_missile;

    ObjectManager( void );
    ObjectManager ( const ObjectManager & srcObj );
    ObjectManager & operator=( const ObjectManager & srcObj ); //confirm these
    ~ObjectManager( void );
	ObjectManager( int maxX, int maxY );
	
	void	playerFire( void );
	void	enemyFire( int x, int y );

	Player	*getPlayer( void );
	void	collisionManager( void );//may return 1 if player collision
	void	moveManager( void );
	void	drawManager( void );
	int		getMaxX( void );
	int		getMaxY( void );
	void	gameTickCounter( void );
	int		getGameTick( void );
	void	enemySpawner( int x, int y );

protected: // maybe
	int ticks;
    int maxX;
    int maxY;
};

#endif