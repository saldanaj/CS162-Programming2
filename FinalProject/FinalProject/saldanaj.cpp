/*
 Author: Joaquin Saldana 
 Date: 08/02/2016
 Description:  This is the main.cpp/function for my final project.  This is a game in which the player is the famous DC character Batman and he is on a quest to find the Joker 
 who has just escaped Batman's custody.  Batman is in a hurry as he needs to find the Joker before he unleashes his toxic nerve gas on the people of Gotham.  Armed with a utility 
 belt (Linked List), Batman will need to move through several environments (Linked Structures), encountering puzzles and options, with the ultimate goal of finding the Joker.  
 
 Along the way, Batman may collect gagdet's he will need to collect to be allowed into other environments and will encounter other puzzle's or "Riddles" (hint).  But Batman can't take 
 too long, if he wonder's around too much he is running the risk of running out of time (maximum 7 new environments) before the Joker plots unravels.  
 
 Good luck!!!
 */

#include "JoaquinsUtilities.hpp"
#include "GadgetContainer.hpp"
#include "DCCharacter.hpp"
#include "Batman.hpp"
#include "Joker.hpp"
#include "Space.hpp"
#include "Street.hpp"
#include "ParkingGarage.hpp"
#include "WayneManor.hpp"
#include "BatCave.hpp"
#include "Arkham.hpp"
#include "ArkhamRoof.hpp"

int main()
{
    // SEED RANDOM INT GENERATOR
    
    srand(time(0));
    
    /****************************************
     INTRODUCTION TO THE 
     
     This section of code explains the plot of the game and will instruct the user on what he/she needs to accomplish in order to complete the game.
     ****************************************/
    
    cout << "Welcome to Gotham City, the city of Bruce Wayne and his alter persona, BATMAN!!!" << endl;
    cout << endl;
    cout << "THE JOKER!!, has just escaped Batman's custody.  We must hurry and find him before he makes it to the chemical plant and releases the";
    cout << " nerve toxin that can kill the victimless";
    cout << " citizens of Gotham City." << endl;
    cout << endl;
    cout << "****** Your task, move through multiple parts of the city, collecting gagdets, running into other villians, with the ultimate goal of reaching the Joker. ******" << endl;
    cout << endl;
    cout << "YOU MUST BEWARE, you must make it to the Joker by the 6th move, or else time will have run out and the Joker will have succeeded in his evil plot to unleash his ";
    cout << "never toxin amongst Gotham's citizens." << endl;
    cout << endl;
    
    /*
     DECLARATION OF MAIN VARIABLES 
     This includes the declaration of the DCCharacters (Batman and Joker), and the creation of the Spaces which are the Street (center of the linked structure), and the Parking Garage,
     Wayne Manor, Bat Cave, Arkham, and Arkham Roof
     */
    
    JoaquinsUtilities utility1;
    
    DCCharacter * b1 = new Batman;
    
    DCCharacter * j1 = new Joker;
    
    Space * street = new Street;
    
    Space * parkingGarage = new ParkingGarage;
    
    Space * wayneManor = new WayneManor;
    
    Space * batCave = new BatCave;
    
    Space * arkham = new Arkham;
    
    Space * arkhamRoof = new ArkhamRoof(b1, j1);
    
    /*
     CONSTRUCTION OF THE LINKED STRUCTURE 
     - here (if you refer to diagram in the Reflections document) you will find that the "Street" pointer, is the center of the structure, and the user will move through the 
     structure while pivoting throught the linked structure.
     */
    
    street->setPointer1(wayneManor);
    
    street->setPointer2(parkingGarage);
    
    street->setPointer3(batCave);
    
    street->setPointer4(arkham);
    
    wayneManor->setPointer1(street);
    
    parkingGarage->setPointer1(street);
    
    batCave->setPointer1(street);
    
    arkham->setPointer1(street);
    
    /*
     BEGINNING OF THE PROGRAM 
     - the program will inform the user that Batman is currently in the street and will need to choose in which path to return
     */
    
    // PROGRAM WILL CONTINUE UNTIL ONE OF THE CHARACTER'S IS DEAD
    
    Space * batmansCurrentLocation;
    
    int decision = 0;
    
    string prompt1 = "Do you wish to terminate? If so enter 0, else enter any other number:  ";
    
    string prompt2 = "What level do you wish to visit?\n1. Wayne Manor\n2. Parking Garage\n3. Bat Cave\n4. Arkham\nWhere do you wish to go:";
    
    while(parkingGarage->isSpaceCompleted() == false || batCave->isSpaceCompleted() == false || wayneManor->isSpaceCompleted() == false || arkham->isSpaceCompleted() == false)
        {
            batmansCurrentLocation = street;
            
            cout << "Welcome Batman, you are currently located in the " << batmansCurrentLocation->getSpaceName() << " space" << endl;
            
            cout << endl;
            
            while(utility1.getUtilitiesFlag() == false)
            {
                if(utility1.isANumber(decision, prompt2) == false)
                {
                    cout << "ERROR: You did not enter a number.  ";
                    cout << endl;
                }
                else if(utility1.isIntInRangeEqual(decision, 1, 4) == false)
                {
                    cout << "ERROR: You entered a number less than 1 and greater than 3. ";
                    cout << endl;
                }
            }
            
            utility1.clearUtilitiesFlag();
            
            if(decision == 1)
            {
                // assignment of the pointer to wayne manor space which is the first pointer
                
                batmansCurrentLocation = street->getPointer1();
                
                if(batmansCurrentLocation->isSpaceCompleted() == true)
                {
                    cout << endl;
                    cout << "You've already completed the Wayne Manor level.  As a result you will be returned to the \"Street\" space" << endl;
                    cout << endl;
                    
                    // reassignment of the current location pointer to the street space
                    
                    batmansCurrentLocation = batmansCurrentLocation->getPointer1();
                }
                else
                {
                    cout << "Welcome to " << batmansCurrentLocation->getSpaceName() << endl;
                    cout << endl;
                    
                    while(batmansCurrentLocation->isSpaceCompleted() == false)
                    {
                        batmansCurrentLocation->game();
                    }
                    
                    b1->addToCharactersGadgetContainer("Batarang");
                    
                    cout << "You will now be returning to the street space" << endl;
                    
                    batmansCurrentLocation = batmansCurrentLocation->getPointer1();
                }
                
            } // END OF IF STMT IF USER CHOOSE OPTION 1 (WAYNE MANOR)
            if(decision == 2)
            {
                // assignment of the pointer to parking garage space which is the second pointer
                
                batmansCurrentLocation = street->getPointer2();
                
                if(batmansCurrentLocation->isSpaceCompleted() == true)
                {
                    cout << endl;
                    cout << "You've already completed the Parking Garage level.  As a result you will be returned to the Street space " << endl;
                    cout << endl;
                    
                    batmansCurrentLocation = batmansCurrentLocation->getPointer1();
                }
                else
                {
                    cout << "Welcome to " << batmansCurrentLocation->getSpaceName() << endl;
                    cout << endl;
                    
                    while(batmansCurrentLocation->isSpaceCompleted() == false)
                    {
                        batmansCurrentLocation->game();
                    }
                    
                    cout << "You will now be returning to the Street space" << endl;
                    
                    batmansCurrentLocation = batmansCurrentLocation->getPointer1();
                    
                }
            } // END OF IF STMT IF USER CHOOSE OPTION 2 (PARKING GARAGE)
            if(decision == 3)
            {
                // batman is in the bat cave collecting the batclaw if applicable
                
                batmansCurrentLocation = street->getPointer3();
                
                if(batmansCurrentLocation->isSpaceCompleted() == true)
                {
                    cout << endl;
                    cout << "You've already completed the Bat Cave level.  As a result you will be returned to the Street space " << endl;
                    cout << endl;
                    
                    batmansCurrentLocation = batmansCurrentLocation->getPointer1();
                }
                else if(parkingGarage->isSpaceCompleted() == false && batmansCurrentLocation->isSpaceCompleted() == false)
                {
                    cout << endl;
                    cout << "Sorry you must complete the Parking Garage level before granting access to this level" << endl;
                    cout << endl;
                    
                    batmansCurrentLocation = batmansCurrentLocation->getPointer1();

                }
                else
                {
                    cout << "Welcome to " << batmansCurrentLocation->getSpaceName() << endl;
                    cout << endl;
                    
                    while(batmansCurrentLocation->isSpaceCompleted() == false)
                    {
                        batmansCurrentLocation->game();
                    }
                    
                    b1->addToCharactersGadgetContainer("BatClaw");
                    
                    batmansCurrentLocation = batmansCurrentLocation->getPointer1();

                }
            } // END OF IF STATEMENT IF USER CHOOSE OPTION 3 (BATCAVE)
            if(decision == 4)
            {
                // batman is in the arkham facility
                
                batmansCurrentLocation = street->getPointer4();
                
                if(batmansCurrentLocation->isSpaceCompleted() == true && (parkingGarage->isSpaceCompleted() == false || batCave->isSpaceCompleted() == false || wayneManor->isSpaceCompleted() == false))
                {
                    cout << endl;
                    cout << "You've already completed the Arkham level.  However to get to the roof you must complete the other levels and equip the BatClaw  " << endl;
                    cout << endl;
                    
                    batmansCurrentLocation = batmansCurrentLocation->getPointer1();
                }
                else if (batmansCurrentLocation->isSpaceCompleted() == true && b1->isCharacterGadgetInContainer("BatClaw") == false)
                {
                    cout << "You need the BatClaw to continue onto the Roof" << endl;
                    batmansCurrentLocation = batmansCurrentLocation->getPointer1();
                }
                else
                {
                    cout << "Welcome to " << batmansCurrentLocation->getSpaceName() << endl;
                    cout << endl;
                    
                    while(batmansCurrentLocation->isSpaceCompleted() == false)
                    {
                        batmansCurrentLocation->game();
                    }
                    
                    batmansCurrentLocation = batmansCurrentLocation->getPointer1();
                }
                
            } // END OF IF STMT IF USER CHOOSE OPTION 4 (ARKHAM)
            
        } // END OF WHILE LOOP WHICH CONDITIONS ARE THAT ALL THE SPACES CONNECTED BY STREET BE COMPLETED

    cout << "Congratulations Batman, you passed all of the levels and have the BatClaw, now you can access the Arkham Roof" << endl;
    
    batmansCurrentLocation = arkham;
    
    batmansCurrentLocation->setPointer2(arkhamRoof);
    
    batmansCurrentLocation = batmansCurrentLocation->getPointer2();
    
    batmansCurrentLocation->game();

    delete b1;
    
    delete j1;
    
    delete street;
    
    delete parkingGarage;
    
    delete wayneManor;
    
    delete batCave;
    
    delete arkham;
    
    delete arkhamRoof;
    
    
    cout << "Thank you for playing!!" << endl;
    
    cout << endl;

    return 0;
}





























