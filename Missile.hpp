#ifndef MISSILE_H
# define MISSILE_H

# include "GameObject.hpp"

class Missile : public GameObject {

public:

	Missile( void ); // default constructor
	Missile( const Missile & srcObj ); // copy constructor
	Missile & operator=( const Missile & srcObj ); // assignation operator overload
	~Missile( void ); // destructor
};

#endif