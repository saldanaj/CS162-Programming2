/*
 Author: Joaquin Saldana
 Date: 06/30/2016
 
 Description: this is the header file to the loaded dice class.  In this class, the dice are loaded, in other words there's a chance the dice may roll a different number vs number odds because  the dice are "weighed" or loaded.  This is a derived class from the Dice class. The Dice class is the parent class.
 */

#ifndef LOADEDDICE_HPP
#define LOADEDDICE_HPP

#include "Dice.hpp"

class LoadedDice:public Dice
{
    private:
    
        // no different member varibales from the Dice class
    
    public:
    
        // CONSTRUCTORS
    
        // DEFAULT CONSTRUCTOR
    
        LoadedDice():Dice(){};
    
        // OVERLOADED CONSTRUCTOR WHICH INHERITS THE OVERLOADED CONSTRUCTOR FROM DICE CLASS
    
        LoadedDice(int totalSides):Dice(totalSides){};
    
        //CLASS FUNCTION
    
        // overriding of the Parent, Dice, class function rollDice()
    
        int rollDice(); 
    
};

#endif /* LoadedDice_h */
