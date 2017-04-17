/***************************************************************************************
 Author: Joaquin Saldana
 Date: 07/06/16
 
 Description: This is the header file for the Doodlebug class.  This header file will only
 be listing the functions it's overriding.
 
 The Doodlebugs have the following rules:
 
 1. Eat - Doodlebugs only eat Ant's but do not eat other Doodlebugs.
 
 2. Breed - when called will increment the breed counter.  For the Doodlebug, if the
 counter reaches 8 (or a number divisible by 8), then the function returns true.
 Else the function returns false.
 
 3. isAlive - in order for a Doodlebug to remain alive it needs to eat.  If after 3 moves 
 the Doodlebug has not eaten, it dies.  Otherwise it continues moving.
 
 The move function is not defined since it operates the same for all classes.
 
 ***************************************************************************************/

#ifndef DOODLEBUG_HPP
#define DOODLEBUG_HPP

#include "Critter.hpp"


class Doodlebug:public Critter
{
    
public:
    
    // CONSTRUCTOR
    
    Doodlebug();
    
    // GET FUNCTIONS
    
    string critterName();
    
    // SET FUNCTIONS
    
    void eat(Critter * nextPosition);
    
    bool breed();
    
    bool isAlive();
    
};


#endif /* Doodlebug_h */
