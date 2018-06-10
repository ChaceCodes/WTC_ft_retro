#ifndef PLAYER_H
# define PLAYER_H

# include "GameObject.hpp"

class Player : public GameObject {

public:

	Player( void ); // default constructor
	Player( const Player & srcObj ); // copy constructor
	Player & operator=( const Player & srcObj ); // assignation operator overload
	~Player( void ); // destructor
	Player( int maxX, int maxY);

	void	updatePos(int x, int y);
	void	fire( int direction );
};

#endif