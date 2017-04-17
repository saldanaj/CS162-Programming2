/*
 Author: Joaquin Saldana    
 
 Description: This is the implementation file for the Critter class.  The Critter class will be the base class for the Ant and Doodlebug classes.  The Critter class will never been instantiated.
 */


#include "Critter.hpp"

/***************
 CONSTRUCTOR(S)
 **************/


Critter::Critter()
{
    hasMoved = false;
    
    hasEaten = false;
    
    breedCounter = 0;
    
    deathCounter = 0;
}


/***************
 GET FUNCTIONS
 **************/

bool Critter::hasTheCritterMoved()
{
    return hasMoved;
}

bool Critter::getHasEaten()
{
    return hasEaten;
}

int Critter::getBreedCounter()
{
    return breedCounter;
}

int Critter::getDeathCounter()
{
    return deathCounter;
}

string Critter::critterName()
{
    return "Critter";
}

/***************
 SET FUNCTIONS
 **************/

void Critter::resetHasMoved()
{
    hasMoved = false;
}

void Critter::resetHasEaten()
{
    hasEaten = false;
}

void Critter::resetDeathCounter()
{
    deathCounter = 0;
}

/**********************
 CLASS/UNIQUE FUNCTIONS
 **********************/


/*******************************************************************************
 Function: move() 
 Parameter: None 
 Description: This function is meant to simulate, randomly, where the Critter is to
 move next in a grid.  The function will generate a number between 1 and 4 to 
 simulate up, down, left and right.  The corresponding number mean the following:
 1. up 
 2. down
 3. right 
 4. left
 *******************************************************************************/

int Critter::move()
{
    hasMoved = true; 
    
    return rand() % 4 + 1;
}

/*******************************************************************************
 Function: eat
 Parameter: Critter Pointer (Critter * nextPosition)
 Description: This function accepts a pointer to a Critter object.  If verifies 
 the pointer is not pointing to NULL.  If not pointing to NULL, it verifies if 
 the Critter object is either an Ant or Doodlebug.  Depending on the object, it 
 checks if the object is edible.
 *******************************************************************************/

void Critter::eat(Critter *nextPosition)
{
    if(nextPosition == NULL)
    {
        hasEaten = false;
    }
}

/*******************************************************************************
 Function: breed
 Parameter: None
 Description: Each Critter object will have a breed counter.  The function 
 returns true if the Critter has reached the maximum number of moves necessary 
 to reproduce.
 *******************************************************************************/

bool Critter::breed()
{
    return false;
}

/*******************************************************************************
 Function: isAlive()
 Parameter: None
 Description: Function checks the deathCounter to ensure the Critter hasn't 
 reached it's end of life.  Each Critter will have it's own life threshold.  
 If the Critter has reached it's maximum life span then the function returns 
 true, else it returns false.
 *******************************************************************************/

bool Critter::isAlive()
{
    return false;
}























