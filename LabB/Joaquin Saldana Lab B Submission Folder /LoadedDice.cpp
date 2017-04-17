/*
 Author: Joaquin Saldana
 Date: 06/30/2016
 
 Description: this is the implementation file to the loaded dice class.  In this class, the dice are loaded, in other words there's a chance the dice may roll a different number vs number odds because  the dice are "weighed" or loaded.  This is a derived class from the Dice class. The Dice class is the parent class.  
 */

#include "LoadedDice.hpp"


/************************************************************************************************************
 Function: rollDice (LoadedDice)
 Parameters: none
 Description: simulates the roll of a Dice and returns a number depending on the number of sides the Dice has. 
 How this function takes a 10% the number rolled may increase by 1 if it meets a boolean criteria.
 ************************************************************************************************************/


int LoadedDice::rollDice()
{
    // increment the roll counter by one
    
    this->setNumberOfRolls(this->rollCounter() + 1);
    
    // the function grabs a number between the number of sides elected by the user and
    // 1.
    
    this->setNumberRolled(rand() % this->numOfSides() + 1);
    
    // the random number generate will generate a number between 1 and 10
    // if the number generated hits 5, then the number rolled will increase by 1.  Hence
    // changing the outcome of a standard roll by 10% (1 out of 10 chance / 10% chance)
    
    int chanceNum = rand() % 10 + 1;
    
    if(chanceNum == 5)
    {
        this->setNumberRolled(this->numRolled() + 1);
        
        return this->numRolled();
    }
    else
    {
        return this->numRolled();
    }
}