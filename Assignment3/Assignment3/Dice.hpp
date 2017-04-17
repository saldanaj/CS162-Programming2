/*
 Author/Programmer: Joaquin Saldana 
 
 Description: this is the header file to a dice class.  It will contain two functions, one to roll a 6 sided dice, and the other to roll and a 10 sided dice.  An implenetation file, .cpp, will follow.
 
 */

#ifndef DICE_HPP
#define DICE_HPP

#include <cstdlib>
#include <ctime>

class Dice
{
    
    private:
        int rollResult;
    
    public:
        Dice(); 
        int sixSidedRoll();
        int tenSidedRoll();
    
};


#endif /* Dice_h */
