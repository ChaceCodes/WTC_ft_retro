#ifndef GAMEOBJECT_H
# define GAMEOBJECT_H

# include <string>

class GameObject {


public:

    GameObject( void );
    GameObject ( const GameObject & srcObj );
    GameObject & operator=( const GameObject & srcObj ); //confirm these
    ~GameObject( void );

    int getPosX( void );
    int getPosY( void );
//    void    updatePos( int x, int y );
 //   virtual void    fire( void ) = 0;
  //  void    erase( void );
//    void    checkCollision( void ); moved to ArenaObject



    

    int x;
    int y;
    //Missiles[3];//change to define/variable

    std::string chr;

};

#endif