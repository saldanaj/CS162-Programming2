/***************************************************************************************
 Author: Joaquin Saldana
 Date: 07/06/16
 
 Description: This is the header file for the Ant class.  This header file will only 
 be listing the functions it's overriding.
 
 The Ant's have the following rules: 
 
 1. Eat - Ant's only eat spaces which are not occupied by other Ant's or other 
 Doodlebugs.
 
 2. Breed - when called will increment the breed counter.  For the ant, if the 
 counter reaches 3 (or a number divisible by 3), then the function returns true.
 Else the function returns false.
 
 3. isAlive - Ants have a lifespan of 10 moves.  If the Ant reaches 10 moves, then
 it will die and the function will return false.  Else it will return true.
 
 The move function is not defined since it operates the same for all classes.
 
 ***************************************************************************************/

#ifndef ANT_HPP
#define ANT_HPP

#include "Critter.hpp" 

class Ant: public Critter
{
    public:
    
        // CONSTRUCTOR
    
        Ant();
    
        // GET FUNCTIONS
    
        string critterName();
    
        // SET FUNCTIONS
    
        void eat(Critter * nextPosition);
    
        bool breed();
    
        bool isAlive();
    
};

#endif /* Ant_h */
