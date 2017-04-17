/*
 Author: Joaquin Saldana
 Date: 08/02/2016
 Description: this is the implementation file to the Batcave "Space" where Batman can find the Batclaw in order to climb the "Prison Roof" to get to the Joker
 */

#include "BatCave.hpp" 


// CLASS CONSTRUCTOR

BatCave::BatCave():Space("Bat Cave")
{
    choice = 0;
//    b = "BatClaw";
}

// GET METHODS

int BatCave::getChoice()
{
    return choice;
}

string BatCave::getBatClaw()
{
    return "BatClaw";
}

// SET METHODS

void BatCave::setChoice(int i)
{
    choice = i;
}

// VIRTUAL FUNCTION

void BatCave::game()
{
    cout << endl;
    cout << "You are now in the Batcave and have equipped the BatClaw in your utility belt." << endl;
    cout << endl;
    
    this->setSpaceCompleted(true); 
}