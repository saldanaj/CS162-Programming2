/*
 Author: Joaquin Saldana 
 Date: 08/04/2016
 Description: this is the header file to the DC character class.  This will be the base abstract class for the Batman and Joker characters which are derived from this class.  
 Each DC character will have a name (string), attack (int), defense (int), and a unique function (pure virtual function).
 */

#ifndef DCCHARACTER_HPP
#define DCCHARACTER_HPP 

#include "JoaquinsUtilities.hpp"
#include "GadgetContainer.hpp"

class DCCharacter
{
    private:
    
        string characterName;
    
        int attack;
    
        int health;
    
        GadgetContainer utilityBelt; 
    
    public:
    
        // CONSTRUCTOR
    
        DCCharacter(string name, int h);
    
        // GET FUNCTIONS
    
        int getAttack();
    
        int getHealth();
    
        string getCharacterName();
    
        // SET FUNCTIONS
    
        void setHealth(int newHealth);
    
        // CLASS FUNCTIONS
    
        bool isAlive(); 
    
        // PURE VIRTUAL FUNCTION
    
        virtual int offense() = 0;
    
        virtual void damage(int) = 0;
    
        virtual string attackMethod() = 0;
    
        virtual void regenerateHealth() = 0;
    
        // GADGETCONTAINER SET AND GET METHODS
    
        void addToCharactersGadgetContainer(string g);
    
        bool isCharactersGadgetContainerEmpty();
    
        bool isCharacterGadgetInContainer(string g);
    
        void printCharactersGadgetList();
    
};

#endif /* DCCharacter_h */
