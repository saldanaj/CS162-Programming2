/*
 Author: Joaquin Saldana
 Date: 08/02/2016
 Description: This is the header file to the "Arkham Roof" space in which Batman can expect to battle the Joker.  However to get there he will need to
 have the Bat Claw and have solved various Riddles.  Once in this Space, he will have to fight the Joker and hope he wins.  If he does, he would have stopped the
 Joker's sinister plan.
 */

#include "ArkhamRoof.hpp"

//  CLASS CONSTRUCTOR

ArkhamRoof::ArkhamRoof(DCCharacter * b, DCCharacter * j):Space("Arkham Roof")
{
    b1 = b;
    j1 = j;
}

// PURE VIRTUAL FUNCTION

void ArkhamRoof::game()
{
    
    int round = 1;
    
    while(b1->isAlive() == true && j1->isAlive() == true)
    {
        cout << "=============================================================" << endl;
        
        cout << "Round " << round << " will now begin. " << endl;
        cout << endl;
        
        round++;
        
        int batmanAttack = b1->offense();
        int jokerAttack = j1->offense();
        
        cout << "Batman just produced an attack score of " << batmanAttack << endl;
        cout << b1->attackMethod() << endl;
        cout << endl;

        cout << "Joker just produced an attack score of " << jokerAttack << endl;
        cout << j1->attackMethod() << endl;
        cout << endl;
        
        b1->damage(jokerAttack);
        j1->damage(batmanAttack);
        
        cout << "Batman's health after the attack from the Joker is " << b1->getHealth() << endl;
        cout << "Joker's health after the attack from Batman is " << j1->getHealth() << endl;
        
        cout << "=============================================================" << endl;
    }
    
    
    if(b1->isAlive() == false && j1->isAlive() == false)
    {
        cout << endl;
        
        cout << "BOTH CHARACTER'S DIED.  ITS A DRAW!!" << endl;
        
        cout << endl;
    }
    else if(b1->isAlive() == false)
    {
        cout << endl;
        
        cout << "The Joker has won, and Gotham is doomed" << endl;
        
        cout << endl;
        
    }
    else if(j1->isAlive() == false)
    {
        cout << endl;
        
        cout << "Batman has won and saved Gotham again.  The Joker is now in his custody" << endl;
        
        cout << endl;
        
        this->setSpaceCompleted(true);
    }
}















