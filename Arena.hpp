#ifndef ARENA_H
# define ARENA_H


#include "Enemy.hpp"
#include "Player.hpp"
#include "Missile.hpp"

#include <ncurses.h>
#include <iostream>
#include <unistd.h>

class Arena{
    public:
        Arena( void );
        Arena( const Arena & srcObj );
        Arena & operator=( const Arena &srcObj );
        ~Arena( void );
        
        void    initialise( void );
        void    gameLoop( void );
        void    exit( void );
      //  void    printLine( std::string charComb );
        
        int     maxX;
        int     maxY;


}; 

# endif