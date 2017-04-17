/*
Author: Joaquin Saldana 
Date: 06/30/2016
Description: this is the header file to the Dice class, the creates an object abstraction of a Die.  Ultimately it will be used as the parent class for a Loaded Dice class.  
 This class will have two constructors, a default constructor and a constructor which accepts a number as a parameter.  You can refer to the .cpp/implementation file for more information.
 */



#ifndef DICE_HPP
#define DICE_HPP

#include <cstdlib>

class Dice
{
    
    private:
    
        int numberOfSides; // number of sides the die will have
    
        int numberRolled; // number of the Die rolled
    
        int numberOfRolls; // number of times the Die has been rolled (counter)
    
    public:
    
        // Default constructor
    
        Dice();
    
        // constructor which takes a int so it can assign the Die a number of
        // of sides
    
        Dice(int totalSides);
    
        // ACCESSOR AND MUTATOR FUNCTIONS
    
        // Set Functions
    
        void setNumberOfSide(int n);
    
        void setNumberOfRolls(int r);
    
        void setNumberRolled(int r); 
    
        // Get Functions
    
        int numOfSides();
    
        int numRolled();
    
        int rollCounter();
    
        // CLASS FUNCTIONS
    
        // Function: rollDice
        // this function rolls the Die once and provides a number to simulate the roll of a n number
        // sided Die/Dice.  It's uses a random number generator.
    
        int rollDice();
    

};


#endif /* Dice_h */
