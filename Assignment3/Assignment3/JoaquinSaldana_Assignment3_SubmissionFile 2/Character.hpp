/*
 
 Author: Joaquin Saldana
 Date: 07/21/2016
 Description: this is the header file for the Character class.  This is an abstract class and will be the
 base class for the derived Characters which include the following:
 1. Medusa
 2. Gollum
 3. Reptile People
 4. Blue Men
 5. Harry Potter
 
 Each character will have their own special abilities, defense, armor, strength, and attack.
 
 */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Dice.hpp"
#include "JoaquinsUtilities.hpp"

class Character
{
    
    private:
        int damage;  // this holds the damage it rolled for the attack function
        int strength;
        int armor;
    
    public:
    
        // CLASS CONSTRUCTOR
    
        Character(int a, int s);
    
        Dice dice1;
    
        // PURE VIRTUAL FUNCTIONS
         
    
        virtual int attack() = 0;
        virtual void defense(int d) = 0;
        virtual string getCharacterName()=0;
    
    
        /***********************************
         Class accesor and mutator functions.
         ***********************************/
    
        int getDamage();
        int getStrength();
        int getArmor();
    
        void setDamage(int d);
        void setStrength(int s);
        void setArmor(int a);
    
        bool isDead();
    
};

#endif /* Character_h */
