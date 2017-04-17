/*
 Author: Joaquin Saldana
 Date: 08/04/2016
 Description: This is the implementation file for the Joker character which is a derived class of the DCCHARACTER
 class.  This character has the following traits:
 
 - Joker starts at a health of 120, since he is somewhat superhuman in some ways
 - Has a max offensive attack of 15
 - Damage, since the Joker is somewhat of a freak, he has an armor of 2 which prevents from inflicting a full damage
 - AttackMethod, returns a common saying from Joker's library of custom phrases over the years
 
 The Joker does not have a utility belt.
 */


#include "Joker.hpp" 

// CLASS CONSTRUCTOR

Joker::Joker():DCCharacter("Joker", 120)
{
    
}

// CLASS FUNCTIONS

/*
 Function: offense()
 Parameter: N/A
 Return: integer
 Description: function returns an integer, meant to simulate the total offense the character is allowed to use.  In Joker's character max offense is 6.  However,
 a random number generator will generate the offensive score for the Joker character
 */

int Joker::offense()
{
    return rand() % 15 + 1;
}

/*
 Function: damage()
 Parameter: integer
 Return: N/A
 Description: function calculates the amount of health the palyer will have left after receive an offensive attack from his opponent
 */

void Joker::damage(int d)
{
    int tempHealth = (this->getHealth() - d) + 2 ;
    this->setHealth(tempHealth);
}

/*
 Function: attackMethod()
 Parameter: none
 Return: string
 Description: return common phrases from each character.  In particular, with Joker, it will return common phrases from the Joker
 */

string Joker::attackMethod()
{
    int temp = rand() % 4 + 1;
    
    if (temp == 1)
    {
        return "HAHAHAHA The Joke's on you BATMAN!!";
    }
    if(temp == 2)
    {
        return "Let's put a smile on that face! HAHAHA";
    }
    if(temp == 3)
    {
        return "And I thought my jokes were bad!";
    }
    else
    {
        return "HAHAHAHAHA!!";
    }
}

/*
 Function: regenerateHealth()
 Parameter: none
 Return: N/A
 Description: resets each Character's health.
 */

void Joker::regenerateHealth()
{
    this->setHealth(120);
}




