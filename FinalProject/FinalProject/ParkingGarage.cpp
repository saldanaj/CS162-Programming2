/*
 Author: Joaquin Saldana
 Date: 08/02/2016
 Description: this is the implementation file to a "Parking Garage" which is derived from the "Space" class.  In this class the user/Batman will meet with the Riddler and if the riddle is solved he will
 have gained access to the BatCave.
 */

#include "ParkingGarage.hpp"

// CLASS CONSTRUCTOR

ParkingGarage::ParkingGarage():Space("Parking Garage")
{
//    utilityParkingGarage = new JoaquinsUtilities;
    
    choice = 0;
}

// CLASS DESTRUCTOR

//ParkingGarage::~ParkingGarage()
//{
//    delete utilityParkingGarage;
//    
//    utilityParkingGarage = NULL; 
//}

// GET METHODS

int ParkingGarage::getChoice()
{
    return choice;
}

// SET METHOD

void ParkingGarage::setChoice(int i)
{
    choice = i;
}

// VIRTUAL FUNCTION

void ParkingGarage::game()
{
    cout << endl;
    cout << "Welcome Batman, you are in the Parking Garage and you before you can go back the Riddler has left you a riddle to solve.  If you solve this Riddle you will be granted access to the BatCave." << endl;
    cout << endl;
    
    string prompt1 = "I have billions of eyes, yet I live in darkness.  I have millions of ears, yet only four lobes.  I have no muscle, yet I rule two hemispheres.  What am I?\n1. The Human Brain\n2. A computer\n3. A TV\nYour choice?: ";
    
    while(utilityParkingGarage.getUtilitiesFlag() == false)
    {
        if(utilityParkingGarage.isANumber(choice, prompt1) == false)
        {
            cout << "ERROR: You did not enter a number.  ";
            cout << endl;
        }
        else if(utilityParkingGarage.isIntInRangeEqual(choice, 1, 3) == false)
        {
            cout << "ERROR: You entered a number less than 1 and greater than 3. ";
            cout << endl;
        }
    }
    
    utilityParkingGarage.clearUtilitiesFlag();
    
    if(choice == 1)
    {
        cout << endl;
        cout << "Congrats Batman, you solved my riddle.  Your still not a worth adversary. You can now access the BatCave" << endl;
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


