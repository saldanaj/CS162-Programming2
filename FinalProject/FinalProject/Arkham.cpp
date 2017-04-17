/*
 Author: Joaquin Saldana
 Date: 08/02/2016
 Description: this is the header file to the "Arkham" space.  Once in the "Space", Batman will face another
 riddle.  Once solved he will be able to move forward to the Arkham Roof, if he has the Bat Claw, to face
 the Joker.
 */

#include "Arkham.hpp" 

// CLASS CONSTRUCTOR

Arkham::Arkham():Space("Arkham")
{
    choice = 0;
    
//    utilitybeltArkham = new JoaquinsUtilities;
}

// CLASS DESTRUCTOR

//Arkham::~Arkham()
//{
//    delete utilitybeltArkham;
//    
//    utilitybeltArkham = NULL; 
//}

// GET METHODS

int Arkham::getChoice()
{
    return choice;
}

// SET METHOD

void Arkham::setChoice(int i)
{
    choice = i;
}

// VIRTUAL FUNCTION

void Arkham::game()
{
    cout << endl;
    cout << "Welcome Batman, you are in the Arkham.  In order for you to continue you will need to solve this riddle left behind The Riddler" << endl;
    cout << endl;
    
    string prompt1 = "What belongs to you, but is used by others?\n1. Your Watch\n2. Your name\n3. A Park\nYour choice?: ";
    
    while(utilitybeltArkham.getUtilitiesFlag() == false)
    {
        if(utilitybeltArkham.isANumber(choice, prompt1) == false)
        {
            cout << "ERROR: You did not enter a number.  ";
            cout << endl;
        }
        else if(utilitybeltArkham.isIntInRangeEqual(choice, 1, 3) == false)
        {
            cout << "ERROR: You entered a number less than 1 and greater than 3. ";
            cout << endl;
        }
    }
    
    utilitybeltArkham.clearUtilitiesFlag();
    
    if(choice == 2)
    {
        cout << endl;
        cout << "Congrats Batman, you solved my riddle.  Your still not a worth adversary. You can now access the Arkham Roof" << endl;
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
