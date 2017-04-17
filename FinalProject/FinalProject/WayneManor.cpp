/*
 Author: Joaquin Saldana
 Date: 08/02/2016
 Description: this is the implementation file for the "Space" which is titled Wayne Manor.  Batman will be presented with another Riddle, and when answered correctly will be equipped with the Batarang.
 */

#include "WayneManor.hpp"

// CLASS CONSTRUCTOR

WayneManor::WayneManor():Space("Wayne Manor")
{
    choice = 0;
//    utilityWayneManor = new JoaquinsUtilities;
//    b = "Batarang";
}

// CLASS DESTRUCTOR

//WayneManor::~WayneManor()
//{
//    delete utilityWayneManor;
//    
//    utilityWayneManor = NULL; 
//}

// GET METHOD

int WayneManor::getChoice()
{
    return choice;
}

string WayneManor::getBatarang()
{
    return "Batarang";
}

// SET METHOD

void WayneManor::setChoice(int i)
{
    choice = i;
}

// VIRTUAL FUNCTION

void WayneManor::game()
{
    cout << endl;
    cout << "You've arrived at Wayne Manor.  If you wish to collect the Batarang you will need solve the following Riddle" << endl;
    cout << endl;
    
    string prompt1 = "We're five little items of an everyday sort; you'll find us all in 'a tennis court'?\n1. Raquets\n2. Paint\n3. Vowels\nYour choice?: ";
    
    while(utilityWayneManor.getUtilitiesFlag() == false)
    {
        if(utilityWayneManor.isANumber(choice, prompt1) == false)
        {
            cout << "ERROR: You did not enter a number.  ";
            cout << endl;
        }
        else if(utilityWayneManor.isIntInRangeEqual(choice, 1, 3) == false)
        {
            cout << "ERROR: You entered a number less than 1 and greater than 3. ";
            cout << endl;
        }
    }
    
    utilityWayneManor.clearUtilitiesFlag();
    
    if(choice == 3)
    {
        cout << endl;
        cout << "Congrats Batman, you solved my riddle.  You can now play with your Batarang" << endl;
        cout << endl;
        
        this->setSpaceCompleted(true);
    }
    else
    {
        cout << endl;
        cout << "Oh that's too bad Batman, sorry your not as smart as me The Riddler" << endl;
        cout << endl;
    }
}


