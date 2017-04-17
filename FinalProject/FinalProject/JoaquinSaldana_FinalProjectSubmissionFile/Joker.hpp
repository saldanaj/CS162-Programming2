/*
 Author: Joaquin Saldana
 Date: 08/04/2016
 Description: This is the header file for the Joker character which is a derived class of the DCCHARACTER
 class.  This character has the following traits:
 
 - Joker starts at a health of 120, since he is somewhat superhuman in some ways
 - Has a max offensive attack of 15
 - Damage, since the Joker is somewhat of a freak, he has an armor of 2 which prevents from inflicting a full damage
 - AttackMethod, returns a common saying from Joker's library of custom phrases over the years
 
 The Joker does not have a utility belt.
 */

#ifndef JOKER_HPP
#define JOKER_HPP

#include "DCCharacter.hpp" 

class Joker:public DCCharacter
{
    public:
    
        // CLASS CONSTRUCTOR
    
        Joker();
    
        // VIRTUAL FUNCTIONS 
    
        int offense();
    
        void damage(int d);
    
        string attackMethod();
    
        void regenerateHealth(); 
};

#endif /* Joker_h */
