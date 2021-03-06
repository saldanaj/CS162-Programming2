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


#include "HarryPotter.hpp" 

// CLASS CONSTRUCTOR

HarryPotter::HarryPotter():Character(0, 10)
{
    lives = 1;
}


/**********************************************************************
 Definition of Virtual Functions
 **********************************************************************/

/****************************
 Harry Potter CLASS FUNCTIONS
 ****************************/

/***************************************
 Function: attack()
 Return: int
 Description:
 ***************************************/

int HarryPotter::attack()
{
    int attackDamage = 0;
    
    for(int i = 0; i < 2; i++)
    {
        attackDamage += dice1.sixSidedRoll();
    }
    
    this->setDamage(attackDamage);
    
    return this->getDamage();
}


/***************************************
 Function: defense
 Parameter: int (damage)
 Description:
 ***************************************/

void HarryPotter::defense(int d)
{
    int defensiveScore = 0;
    
    int pointsToApplyToStrength = 0;
    
    for(int i = 0; i < 2; i++)
    {
        defensiveScore += dice1.sixSidedRoll();
    }
    
    cout << "The defensive score generated by HarryPotter is: " << defensiveScore << endl;
    
    cout << endl;
    
    pointsToApplyToStrength = (defensiveScore + this->getArmor()) - d;
    
    if(pointsToApplyToStrength < 1)
    {
        this->setStrength(this->getStrength() + pointsToApplyToStrength);
    }
    else
    {
        cout << this->getCharacterName() << " was able to deflect the attack with his defensive score and armor" << endl;
        
        cout << endl;
    }
    
    /***************************
     HogWarts Special Ability
     ****************************/
    
    if(this->getStrength() <= 0 && this->lives == 1)
    {
        this->setStrength(20);
        
        lives++;
                
        cout << "HARRY HAS JUST DIED BUT HE HAS RESURRECTED WITH 20 POINTS IN STRENGTH!" << endl;
        
        cout << endl;
    }
    
}


string HarryPotter::getCharacterName()
{
    return "Harry Potter";
}



