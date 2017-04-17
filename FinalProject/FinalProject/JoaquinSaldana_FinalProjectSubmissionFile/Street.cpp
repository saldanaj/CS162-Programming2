/*
 Author: Joaquin Saldana
 Date: 08/02/2016
 Description: this is the header file for the "Space" where Batman will commence the game. This space will be at the center of where he will be moving through the environment/game.
 From here he will have access to four spaces, although a few will be restricted until he successfully solves other "Spaces"
 */

#include "Street.hpp" 


// CLASS CONSTRUCTOR

Street::Street():Space("Street")
{
    choice = 0;
    
//    utility1 = new JoaquinsUtilities;
}

//  CLASS DESTRUCTOR

//Street::~Street()
//{
//    delete utility1;
//    
//    utility1 = NULL; 
//}

// GET METHOD

int Street::getChoice()
{
    return choice;
}

// SET METHOD

void Street::setChoice(int i)
{
    choice = i;
}

// VIRTUAL FUNCTION

void Street::game()
{
    cout << endl;
    cout << "Batman is currently in the street" << endl;
    cout << endl;
    
    string prompt1 = "Please choose which direction you wish to go in:\n1. Wayne Manor\n2. Parking Garage\n3. BatCave\n4. Prison\nWhich direction do you choose? " ;
    
    while(utility1.getUtilitiesFlag() == false)
    {
        if(utility1.isANumber(choice, prompt1) == false)
        {
            cout << "ERROR: You did not enter a number.  ";
            cout << endl;
        }
        else if(utility1.isIntInRangeEqual(choice, 1, 4) == false)
        {
            cout << "ERROR: You entered a number less than 1 and greater than 4. ";
            cout << endl;
        }
    }
    
    utility1.clearUtilitiesFlag();
    
}

