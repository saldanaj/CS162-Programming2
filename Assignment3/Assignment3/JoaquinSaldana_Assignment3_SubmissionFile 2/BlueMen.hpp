/*
 Author: Joaquin Saldana
 Date: 07/21/2016
 Description: this is the header file for the Blue Men character.  Below are the traits of the character.
 This character has a special defensive function.
 
 Attack: max score is 20
 Defense: max score is 18.  However, for every 4 points it loses in strength it loses a die.
 Armor: 3
 Strength Pts: 12.  However for every 4 points it loses in strength it loses in it's ability to defend 
 themselves.
 */

#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP

#include "Character.hpp" 

class BlueMen:public Character
{
    public:
    
        // CONSTRUCTOR
    
        BlueMen();
    
        // VIRTUAL FUNCTIONS
    
        int attack();
    
        void defense(int d);
    
        string getCharacterName();
};


#endif /* BlueMen_h */
