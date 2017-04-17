/*
 Author: Joaquin Saldana
 Date: 07/21/2016
 Description: this is the header file for the Medusa character.  Below are the traits of the character.  This 
 character has a special attack.
 
 Attack: max attack is 12.  If the Medusa character rolls a 12, then the character generates such a large 
 attack number that it automatically pulverizes the opponent and wins.
 Defense: max defense is 6.
 Armor: 3
 Strength Pts: 8
 */

#ifndef MEDUSA_HPP
#define MEDUSA_HPP

#include "Character.hpp"

class Medusa:public Character
{
        public:
    
        // CONSTRUCTOR
    
        Medusa();
    
        // VIRTUAL FUNCTIONS
    
        int attack();
    
        void defense(int d);
    
        string getCharacterName();
    
};


#endif /* Medusa_h */
