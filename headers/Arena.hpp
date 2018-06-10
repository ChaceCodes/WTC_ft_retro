#ifndef ARENA_H
# define ARENA_H


#include "Enemy.hpp"
#include "Player.hpp"
#include "Missile.hpp"
#include "ObjectManager.hpp"

#include <ncurses.h>
#include <iostream>
#include <unistd.h>

class Arena{
    public:

        ObjectManager *OM; //DEBUG
       //Player *player1; //DEBUG


        Arena( void );
        Arena( const Arena & srcObj );
        Arena & operator=( const Arena &srcObj );
        ~Arena( void );
        
        int    initialise( void );
        void    gameLoop( void );
        void    exit( void );
        void    printLines( int *lc, int score, clock_t cl);
        void    fire(  );
        
        int     maxX;
        int     maxY;
        int     died;


}; 

# endif