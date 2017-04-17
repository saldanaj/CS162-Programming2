/*
 Author: Joaquin Saldana 
 Date: 07/20/2016
 Description:
 
 */

#include "Character.hpp"
#include "ReptilePeople.hpp"
#include "Medusa.hpp"
#include "Gollum.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"

int main()
{
    // SEED THE RANDOM NUMBER GENERATOR FOR THE DICE CLASS AND CREATE A PERSONAL UTILITY OBJECT
    
    srand(time(0));
    
    JoaquinsUtilities utility1;

    //*******************************************
    
    // CREATE POINTERS TO FIGHTER'S OF TYPE CHARACTER
    
    Character * fighter1;
    
    Character * fighter2;

    int character_1 = 0;
    
    int character_2 = 0;
    
    int figher1_attack = 0;
    
    int fighter2_attack = 0;
    
    int toExit = 1;
    
    //*******************************************
    
    // PROGRAM INTRODUCTION

    // THIS SECTION OF THE PROGRAM DETAILS THE CHARACTER'S TO THE USER AND PRESENT TO THEM THEIR SPECIAL
    // ABILITIES IF ANY
    
    cout << endl; 
    
    cout << "Welcome to the Fantasy Combat Game " << endl;
    
    cout << endl;
    
    cout << "There are FIVE (5) characters to choose from, the list is as follows: " << endl;
    
    cout << endl;
    
    //*******************************************
    
    cout << "1. Medusa - Max Attack: 12PTS , Max Defense: 6 PTS, Armor: 3 PTS, Strength: 8 PTS" << endl;
    
    cout << "SPECIAL ABILITY: If Medusa rolls a 12, she automatically wins by turning her oppoenent to stone." << endl;
    
    cout << endl;
    
    //*******************************************
    
    cout << "2. Gollum - Max Attack: 6 PTS, Max Defense: 6 PTS, Armor: 3 PTS, Strength: 8 PTS" << endl;
    
    cout << "SPECIAL ABILITY: There is a 5% chance his max attack may increase to 18 " << endl;
    
    cout << endl;
    
    //*******************************************

    cout << "3. Reptile People - Max Attack: 18 PTS, Max Defense: 6 PTS, Armor: 7 PTS, Strength: 18 PTS" << endl;

    cout << "NO SPECIAL ABILITIES" << endl;
    
    cout << endl;
    
    //*******************************************
    
    cout << "4. Blue Men - Max Attack: 20 PTS, Max Defense: 18 PTS, Armor: 3 PTS, Strength: 12 PTS" << endl;
    
    cout << "SPECIAL ABILITY: The Blue Men are small individuals and for every 4 points of damage, their potential defensive score is 6 points less." << endl;
    
    cout << endl;
    
    //*******************************************
    
    
    cout << "5. Harry Potter - Max Attack: 12 PTS, Max Defense: 12 PTS, Armor: 0 PTS, Strength: 10 PTS" << endl;
    
    cout << "SPECIAL ABILITY: Once Harry Potter's strength reaches zero he regenrates a second life with a max strength of 20." << endl;
    
    cout << endl;
    
    //*******************************************
    
    // USER CHOOSES CHARACTER 1
    
    cout << "=============================================================" << endl;

    cout <<  "Who do you choose as opponent number 1? (Please enter a number between 1 and 5 which corresponds to the character. " << endl;
    
    string prompt1 = "Please choose a character:\n1. Medusa\n2. Gollum\n3. Reptile People\n4. Blue Men\n5. Harry Potter\nWhich character do you choose? " ;
    
    while(utility1.getUtilitiesFlag() == false)
    {
        if(utility1.isANumber(character_1, prompt1) == false)
        {
            cout << "ERROR: You did not enter a number.  ";
            cout << endl;
        }
        else if(utility1.isIntInRangeEqual(character_1, 1, 5) == false)
        {
            cout << "ERROR: You entered a number less than 1 and greater than 5. ";
            cout << endl;
        }
    }
    
    utility1.clearUtilitiesFlag();
    
    if(character_1 == 1)
    {
        fighter1 = new Medusa();
    }
    if(character_1 == 2)
    {
        fighter1 = new Gollum();
    }
    if(character_1 == 3)
    {
        fighter1 = new ReptilePeople();
    }
    if(character_1 == 4)
    {
        fighter1 = new BlueMen();
    }
    if(character_1 == 5)
    {
        fighter1 = new HarryPotter();
    }
    
    // USER CHOOSES CHARACTER 2
    
    cout << "=============================================================" << endl;
    
    cout <<  "Who do you choose as opponent number 2? (Please enter a number between 1 and 5 which corresponds to the character. " << endl;
    
    string prompt2 = "Please choose a character:\n1. Medusa\n2. Gollum\n3. Reptile People\n4. Blue Men\n5. Harry Potter\nWhich character do you choose? " ;
    
    while(utility1.getUtilitiesFlag() == false)
    {
        if(utility1.isANumber(character_2, prompt2) == false)
        {
            cout << "ERROR: You did not enter a number.  ";
            cout << endl;
        }
        else if(utility1.isIntInRangeEqual(character_2, 1, 5) == false)
        {
            cout << "ERROR: You entered a number less than 1 and greater than 5. ";
            cout << endl;
        }
    }
    
    if(character_2 == 1)
    {
        fighter2 = new Medusa();
    }
    if(character_2 == 2)
    {
        fighter2 = new Gollum();
    }
    if(character_2 == 3)
    {
        fighter2 = new ReptilePeople();
    }
    if(character_2 == 4)
    {
        fighter2 = new BlueMen();
    }
    if(character_2 == 5)
    {
        fighter2 = new HarryPotter();
    }

    //*******************************************

    // USER IS INFORMED OF HIS SELECTION
    
    cout << endl;
    
    cout << "=============================================================" << endl;
    
    cout << "You choose " << fighter1->getCharacterName() << " as opponent number 1" << endl;
    
    cout << endl;
    
    cout << "You choose " << fighter2->getCharacterName() << " as opponent number 2" << endl;
    
    cout << endl;
    
    cout << "=============================================================" << endl;

    //*******************************************
    
    // GAME BEGINS AND THE USER IS PROVIDED DETAILS OF THE FIGHT
    
    int round = 1;
    
    cout << "The game will continue until the any character dies." << endl;
    
    cout << endl;
    
    //*******************************************

    
    while(fighter1->isDead() == false && fighter2->isDead() == false)
    {
        
        cout << "Round " << round << " will now begin." << endl;
        
        cout << endl;
        
        round++;
        
        int c1Attack = fighter1->attack();
        
        int c2Attack = fighter2->attack();
        
        cout << "Opponent 1, " <<  fighter1->getCharacterName() << " just produced an attack score of: " << c1Attack << endl;
        
        cout << endl;
        
        cout << "Opponent 2, " << fighter2->getCharacterName() << " just produced an attack score of: " << c2Attack << endl;
        
        cout << endl;
        
        fighter1->defense(c2Attack);
        
        fighter2->defense(c1Attack);
        
        cout << "Opponent 1, " << fighter1->getCharacterName() << " strength after the attack is " << fighter1->getStrength() << endl;
        
        cout << endl;
        
        cout << "Opponent 2, " << fighter2->getCharacterName() << " strength after the attack is " << fighter2->getStrength() << endl;
        
        cout << endl;
        
        std::cout << "=============================================================" << std::endl;
        
    }
    
    // BOOLEAN STMTS WHICH INFORM THE USER WHO'S THE WINNER
    
    if(fighter1->isDead() == true)
    {
        cout << endl;
        
        cout << "Opponent 2, " << fighter2->getCharacterName() << " WINS!!!" << endl;
        
        cout << endl;
        
    }
    
    if(fighter2->isDead() == true)
    {
        cout << endl;
        
        cout << "Opponent 1, " << fighter1->getCharacterName() << " WINS!!!" << endl;
        
        cout << endl;
    }
    
    
    //*******************************************

    // DELETION OF DYNAMIC MEMORY AND REASSIGNMENT OF POINTERS TO NULL
    
    delete fighter1;
    
    delete fighter2;
    
    fighter1 = NULL;
    
    fighter2 = NULL;
    
    cout << "Thank you for playing!!!" << endl;
    
    cout << endl;
    
    return 0;
}
