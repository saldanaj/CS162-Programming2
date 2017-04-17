/*
 Author: Joaquin Saldana
 Date: 08/04/2016
 Description: this is the implementation file to the DC character class.  This will be the base abstract class for the Batman and Joker characters which are derived from this class.
 Each DC character will have a name (string), attack (int), defense (int), and a unique function (pure virtual function).
 */

#include "DCCharacter.hpp"

// CLASS CONSTRUCTOR

DCCharacter::DCCharacter(string name, int h)
{
    characterName = name; // initialize the characters name (ex: Batman)
    attack = 0;
    health = h; // initialize the characters health (ex: Joker's health may be different from Batman)
}

// GET FUNCTIONS

// function returns the current value of the private member variable Attack

int DCCharacter::getAttack()
{
    return attack;
}

// function returns the character's health (this is updated as the character receives damage from the opponent)

int DCCharacter::getHealth()
{
    return health;
}

// function returns the character's name

string DCCharacter::getCharacterName()
{
    return characterName;
}

// SET FUNCTIONS

// function set's assigns a new health value to the variable "Health"

void DCCharacter::setHealth(int newHealth)
{
    health = newHealth;
}

// CLASS FUNCTION

// function returns true if the character's health reaches 0 or less

bool DCCharacter::isAlive()
{
    return health >= 0;
}

// GADGET CONTAINER FUNCTIONS

void DCCharacter::addToCharactersGadgetContainer(string g)
{
    utilityBelt.addGadget(g);
}

bool DCCharacter::isCharactersGadgetContainerEmpty()
{
    return utilityBelt.isListEmpty();
}

bool DCCharacter::isCharacterGadgetInContainer(string g)
{
    return utilityBelt.isGadgetInContainer(g);
}

void DCCharacter::printCharactersGadgetList()
{
    utilityBelt.printGadgetList();
}

