#ifndef GAMEOBJECT_H
# define GAMEOBJECT_H

# include <string>

class GameObject {


public:

    GameObject( void );
    GameObject ( const GameObject & srcObj );
    GameObject & operator=( const GameObject & srcObj ); //confirm these
    ~GameObject( void );
    GameObject( int maxX, int maxY );

    int     getPosX( void );
    int     getPosY( void );
    void    updatePos( int x, int y );
    void    drawSelf( void );
    int     isActive( void );
    void    activate( int x, int y );

protected: // maybe
    int state;
    int maxX; //might only be needed in GameEntity
    int maxY; //might only be needed in GameEntity
    int x;
    int y;
    char chr;
};

#endif