#ifndef ARENA_H
# define ARENA_H

class Arena{
    public:
        Arena( void );
        Arena( const Arena & srcObj );
        Arena & operator=( const Arena &srcObj );
        ~Arena( void );
        
        void initialise( void );
        void gameLoop( void );
        void exit( void );
        



}; 

# endif