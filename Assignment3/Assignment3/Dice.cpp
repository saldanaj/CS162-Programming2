
/*
 Author/Programmer: Joaquin Saldana
 
 Description: this is the implementation file to a dice class.  It will contain two functions, one to roll a 6 sided dice, and the other to roll and a 10 sided dice.  Roll utlizies the random function.  
 
 */

#include "Dice.hpp" 

/*************
 CONSTRUCTOR
 ************/


Dice::Dice()
{
    rollResult= 0;
}

// DICE FUNCTIONS

/********************
 SIX SIDED ROLL: returns a number between 1 and 6 to mimic the roll of a single SIX sided dice
 ********************/

int Dice::sixSidedRoll()
{
    return rollResult = rand() % 6 + 1;
}

/********************
 TEN SIDED ROLL: returns a number between 1 and 10 to mimic the roll of a single TEN sided dice
 ********************/

int Dice::tenSidedRoll()
{
    return  rollResult = rand() % 10 + 1;
}
