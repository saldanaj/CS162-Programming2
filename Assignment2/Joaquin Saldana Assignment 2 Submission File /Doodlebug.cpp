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
 the Doodlebug has not eate, it dies.  Otherwise it continues moving.
 
 The move function is not defined since it operates the same for all classes.
 
 ***************************************************************************************/

#include "Doodlebug.hpp" 


/***************
 CONSTRUCTOR(S)
 **************/

Doodlebug::Doodlebug():Critter()
{
    
}

/***************
 GET FUNCTIONS
 **************/

string Doodlebug::critterName()
{
    return "Doodlebug";
}

/**********************
 CLASS/UNIQUE FUNCTIONS
 **********************/


/*******************************************************************************
 Function: eat
 Parameter: Critter Pointer (Critter * nextPosition)
 Description: Doodlebugs only eat Ant's but do not eat other Doodlebugs.  The 
 function checks the Critter's name to verify if the object is an "Ant".  If the
 pointer is indeed an ant, then the death counter is reset and the hasEaten boolean
 operater is changed to true.
 *******************************************************************************/

void Doodlebug::eat(Critter * nextPosition)
{
    deathCounter++;
    
    if(nextPosition == NULL)
    {
        hasEaten = false; // accessing a protected member variable
    }
    else
    {
        hasEaten = false; 
        
        if(nextPosition->critterName() == "Ant")
        {
            this->resetDeathCounter(); // reseting of death counter
            
            hasEaten = true; // accessing a protected member variable
        }
    }
}

/*******************************************************************************
 Function: breed
 Parameter: None
 Description: checks to see if the Doodlebug has made 8 moves in which case it 
 returns true.
 *******************************************************************************/

bool Doodlebug::breed()
{
    breedCounter++;
    
    if(breedCounter % 8 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*******************************************************************************
 Function: isAlive()
 Parameter: None
 Description: function verifies that the Doodlebug has reached 3 steps and has 
 not eaten.  If so then the function returns false meaning the bug is no longer 
 "Alive".  Else it returns true.
 *******************************************************************************/

bool Doodlebug::isAlive()
{
    
    if(deathCounter % 3 == 0 && this->getHasEaten() == false)
    {
        return false;
    }
    else
    {
        return true;
    }
}
