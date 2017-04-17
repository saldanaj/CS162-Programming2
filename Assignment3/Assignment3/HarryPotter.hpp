/*
 Author: Joaquin Saldana
 Date: 07/21/2016
 Description: this is the header file for the Harry Potter character.  Below are the traits of the character.
 This character has a special Strength function.
 
 Attack: max score is 12
 Defense: max defensive score is 12
 Armor: 0
 Strength Pts: the Harry Potter character starts with 10 points for strength.  If his strength reaches zero or 
 less, rather than perishing, the character resurrect's itself with 20 points strength! However the Harry Potter 
 character can only resurrect himself once.  His second death is final.  
 */

#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP

#include "Character.hpp" 

class HarryPotter:public Character
{
    private:
    
        int lives; 
    
    public:
    
        // CONSTRUCTOR
    
        HarryPotter();
    
        // VIRTUAL FUNCTIONS
    
        int attack();
    
        void defense(int d);
    
        string getCharacterName();
};

#endif /* HarryPotter_h */
