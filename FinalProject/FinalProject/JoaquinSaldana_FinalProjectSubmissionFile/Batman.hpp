/*
 Author: Joaquin Saldana
 Date: 08/04/2016
 Description: This is the header file for the Batman character which is a derived class of the DCCHARACTER 
 class.  This character has the following traits: 
 
 - Batman starts at a health of 100 
 - Has a max offensive attack of 25
 - Damage, since he is human, Batman can be vulnerable to damage from his opponent 
 - AttackMethod, returns a common fighting phrase from Batman's arsenal of common 
 phrases
 
 */

#ifndef BATMAN_HPP
#define BATMAN_HPP

#include "DCCharacter.hpp" 
#include "GadgetContainer.hpp"

class Batman:public DCCharacter
{
    protected:
    
//        GadgetContainer * utilitybelt;
    
    public:
    
        // CLASS CONSTRUCTOR
    
        Batman();
    
        // CLASS DESTRUCTOR
    
//        ~Batman();
    
        // CLASS FUNCTION
    
//        GadgetContainer * getUtilityBelt();
    
        // VIRTUAL FUNCTIONS
    
        int offense();
    
        void damage(int d);
    
        string attackMethod();
    
        void regenerateHealth();
    
};


#endif /* Batman_h */
