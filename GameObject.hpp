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

    int getPosX( void );
    int getPosY( void );
    void    updatePos( int x, int y );
    void fire( int direction );
    void    drawSelf( void );
//  void    erase( void );
//  void    checkCollision( void ); moved to ArenaObject
    int maxX;
    int maxY;
    int x;
    int y;
    //Missiles[3];//change to define/variable

    char chr;

};

#endif