/***************************************************************************************
 Author: Joaquin Saldana
 Date: 07/06/16
 
 Description: This is the implementation/.cpp file for the Ant class.  This header file will only
 be listing the functions it's overriding.
 
 The Ant's have the following rules:
 
 1. Eat - Ant's only eat spaces which are not occupied by other Ant's or other
 Doodlebugs.
 
 2. Breed - when called will increment the breed counter.  For the ant, if the
 counter reaches 3 (or a number divisible by 3), then the function returns true.
 Else the function returns false.
 
 3. Move - generates a number/direction in which the Critter is to move.  The number
 is generated randomly.  Each number will represent either up, down, right or left.
 
 4. isAlive - Ants have a lifespan of 10 moves.  If the Ant reaches 10 moves, then
 it will die and the function will return false.  Else it will return true.
 
 ***************************************************************************************/

#include "Ant.hpp" 


/***************
 CONSTRUCTOR(S)
 **************/

Ant::Ant():Critter()
{
    
}

/***************
 GET FUNCTIONS
 **************/

string Ant::critterName()
{
    return "Ant";
}

/**********************
 CLASS/UNIQUE FUNCTIONS
 **********************/


/*******************************************************************************
 Function: eat
 Parameter: Critter Pointer (Critter * nextPosition)
 Description: Ant's can only eat an empty space.  Ant's cannot eat other Ant's or 
 any other Critter for that matter.  Hence the function will alway's return false.
 *******************************************************************************/

void Ant::eat(Critter * nextPosition)
{
    deathCounter++;
    
    if(nextPosition == NULL)
    {
        hasEaten = true; // accessing a protected member variable
    }
    else
    {
        hasEaten = false;
    }
    
}

/*******************************************************************************
 Function: breed
 Parameter: None
 Description: This function increments the breed counter first, and then checks to 
 see if the counter has reached a number divisible by 3.  If so, then the function 
 returns true, signaling that the Ant will need to leave it's offspring in the 
 cell it occupied.  Else, it returns false.
 *******************************************************************************/

bool Ant::breed()
{
    breedCounter++;
    
    if(breedCounter % 3 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*******************************************************************************
 Function: Alive
 Parameter: None
 Description: Once the Ant has made 10 moves then the function returns false
 signaling it's time for the Ant to die (in other words, the object will be freed
 from memory).  Else, the function will return true.
 *******************************************************************************/

bool Ant::isAlive()
{
    if(deathCounter % 10 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}












