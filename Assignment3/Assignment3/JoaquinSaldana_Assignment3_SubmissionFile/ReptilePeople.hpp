/*
 Author: Joaquin Saldana 
 Date: 07/21/2016
 Description: This is the header file to the Reptile People class.  This is a derived class to the Character 
 class which is the base class.  The character class has the following traits: 
 
 Attack: max attack is 18 
 Defense: max defense is 6 
 Armor: 7 points in armor
 Strength Pts: 18 points
 
 */

#ifndef REPTILEPEOPLE_HPP
#define REPTILEPEOPLE_HPP

#include "Character.hpp"

class ReptilePeople:public Character
{
    public:
    
        // CONSTRUCTOR 
    
        ReptilePeople();
    
        // VIRTUAL FUNCTIONS
    
        int attack();
    
        void defense(int d);
    
        string getCharacterName();
    
};

#endif /* ReptilePeople_h */
