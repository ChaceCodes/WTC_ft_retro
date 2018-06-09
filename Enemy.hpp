#ifndef ENEMY_H
# define ENEMY_H

# include "GameObject.hpp"

class Enemy : public GameObject {

public:

	Enemy( void ); // default constructor
	Enemy( const Enemy & srcObj ); // copy constructor
	Enemy & operator=( const Enemy & srcObj ); // assignation operator overload
	~Enemy( void ); // destructor

	Enemy( int maxX, int maxY);

};

#endif