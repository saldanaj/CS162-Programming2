/*
 Author: Joaquin Saldana
 Date: 07/21/2016
 Description: this is the implementation file for the Character class.  This is an abstract class and will be the 
 base class for the derived Characters which include the following: 
 1. Medusa 
 2. Gollum 
 3. Reptile People 
 4. Blue Men 
 5. Harry Potter 
 
 Each character will have their own special abilities, defense, armor, strength, and attack.  
 
 */


#include "Character.hpp"

//**********************
//CLASS CONSTRUCTOR
//**********************

Character::Character(int a, int s)
{
    damage = 0;
    armor = a;
    strength = s;
}

//**********************
//ACCESSOR METHODS
//**********************

int Character::getDamage()
{
    return damage;
}


int Character::getStrength()
{
    return strength;
}

int Character::getArmor()
{
    return armor;
}

bool Character::isDead()
{
    if(this->getStrength() < 1)
    {
        return true;
    }
    
    return false;
}

//**********************
//MUTATOR FUNCTIONS
//**********************

void Character::setDamage(int d)
{
    damage = d;
}


void Character::setStrength(int s)
{
    strength = s;
}

void Character::setArmor(int a)
{
    armor = a;
}


