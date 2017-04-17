/*
 Author: Joaquin Saldana
 Date: 06/30/2016
 Description: this is the implementation file for the Dice class.  
 
 The class is an abstraction of a dice, in which the user can choose between a default constructor w/ 6 sides, or a die with the number of sides they wish to have.
 
 The class has the routine set and get methods and has a unique class function which is to roll the dice.
 */


#include "Dice.hpp"


/************************
 CONSTRUCTORS
 ************************/

// DEFAULT CONSTRUCTOR

Dice::Dice()
{
    numberOfSides = 6;
    numberRolled = 0;
    numberOfRolls = 0;
}

//2ND CONSTRUCTOR
// Parameter: int totalSides
// Description: The user is asked to enter the number of sides they wish
// they want for the dice/die.

Dice::Dice(int totalSides)
{
    numberOfSides = totalSides;
    numberRolled = 0;
    numberOfRolls = 0;
}

/************************
 SET FUNCTIONS
 ************************/


void Dice::setNumberOfSide(int n)
{
    numberOfSides = n;
}

void Dice::setNumberOfRolls(int r)
{
    numberOfRolls = r;
}

void Dice::setNumberRolled(int r)
{
    numberRolled = r;
}

/************************
 GET FUNCTIONS
 ************************/

int Dice::numOfSides()
{
    return numberOfSides;
}

int Dice::numRolled()
{
    return numberRolled;
}

int Dice::rollCounter()
{
    return numberOfRolls;
}

/************************
 CLASS FUNCTIONS
 ************************/


/************************************************************************************************************
 Function: rollDice
 Parameters:
 Description: simulates the roll of a Dice and returns a number depending on the number of sides the Dice has.
 ************************************************************************************************************/


int Dice::rollDice()
{
    numberOfRolls++; 
    
    return numberRolled = rand() % numberOfSides + 1;
}




