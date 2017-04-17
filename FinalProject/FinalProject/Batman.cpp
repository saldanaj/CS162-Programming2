/*
 Author: Joaquin Saldana
 Date: 08/04/2016
 Description: This is the implementation file for the Batman character which is a derived class of the DCCHARACTER
 class.  This character has the following traits:
 
 - Batman starts at a health of 100
 - Has a max offensive attack of 10
 - Damage, since he is human, Batman can be vulnerable to damage from his opponent
 - AttackMethod, returns a common fighting phrase from Batman's arsenal of common
 phrases
 
 */

#include "Batman.hpp"

// CLASS CONSTRUCTOR
// - initializes the pointer utilitybelt which is a pointer to a GadgetContainer

Batman::Batman():DCCharacter("Batman", 100)
{
//    utilitybelt = new GadgetContainer;
}

// OVERRIDDEN CONSTRUCTOR

//Batman::~Batman()
//{
//    delete utilitybelt;
//}

// CLASS FUNCTIONS

/*
 Function: getUtilityBelt()
 Parameter: N/A
 Return: Pointer to GadgetContainer
 Description: return a pointer to the utility belt in Batman's arsenal which hold's his Gadget's.
 */

//GadgetContainer * Batman::getUtilityBelt()
//{
//    return utilitybelt;
//}

// CLASS VIRTUAL FUNCTIONS

/*
 Function: offense() 
 Parameter: N/A
 Return: integer 
 Description: function returns an integer, meant to simulate the total offense the character is allowed to use.  In Batman's character max offense is 25.  However,
 a random number generator will generate the offensive score for the Batman character
 */

int Batman::offense()
{
    return rand() % 25 + 1;
}

/*
 Function: damage()
 Parameter: integer
 Return: N/A
 Description: function calculates the amount of health the player will have left after receive an offensive attack from his opponent
 */

void Batman::damage(int d)
{
    int tempHealth = this->getHealth() - d;
    this->setHealth(tempHealth);
}

/*
 Function: attackMethod()
 Parameter: none
 Return: string
 Description: return common phrases from each character.  In particular, with the Batman, he will same common phrases he usually tells the joker.
 */

string Batman::attackMethod()
{
    int temp = rand() % 4 + 1;
    
    if (temp == 1)
    {
        return "Your plan ends now Joker";
    }
    if(temp == 2)
    {
        return "I'm going to stop you Joker";
    }
    if(temp == 3)
    {
        return "Your not getting away this time Joker";
    }
    else
    {
        return "POW!!";
    }
}

/*
 Function: regenerateHealth()
 Parameter: none
 Return: N/A
 Description: resets each Character's health.
 */

void Batman::regenerateHealth()
{
    this->setHealth(100);
}






