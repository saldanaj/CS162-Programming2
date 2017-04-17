/*
 Author: Joaquin Saldana
 Date: 07/21/2016
 Description: this is the header file for the Gollum character.  Below are the traits of the character.
 This character has a special attack.
 
 Attack: max attack is 6.  In the attack function, the character will generate a random number between 1 and 20.  
 If the number rolled is 10 (a 5% chance), then the character's max attack increases to 18 (three rolls of a six 
 sided dice).
 Defense: max defense is 6.
 Armor: 3
 Strength Pts: 8
 */

#ifndef GOLLUM_HPP
#define GOLLUM_HPP

#include "Character.hpp" 

class Gollum:public Character
{
    
    public:
    
        // CONSTRUCTOR
    
        Gollum();
    
        // VIRTUAL FUNCTIONS
    
        int attack();
    
        void defense(int d);
    
        string getCharacterName();
};

#endif /* Gollum_h */
