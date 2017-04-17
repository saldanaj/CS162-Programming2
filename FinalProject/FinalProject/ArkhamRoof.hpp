/*
 Author: Joaquin Saldana 
 Date: 08/02/2016
 Description: This is the header file to the "Arkham Roof" space in which Batman can expect to battle the Joker.  However to get there he will need to 
 have the Bat Claw and have solved various Riddles.  Once in this Space, he will have to fight the Joker and hope he wins.  If he does, he would have stopped the 
 Joker's sinister plan.
 */

#ifndef ARKHAMROOF_HPP
#define ARKHAMROOF_HPP

#include "Space.hpp"
#include "DCCharacter.hpp"
#include "Batman.hpp" 
#include "Joker.hpp"


class ArkhamRoof:public Space
{
    private:
    
//    Batman * b1;
//    
//    Joker * j1;

    DCCharacter * b1;
    
    DCCharacter * j1;
    
    public:
    
    // CLASS CONSTRUCTOR
    
    ArkhamRoof(DCCharacter * b, DCCharacter * j);
    
    // VIRTUAL FUNCTION
    
    void game();
    
};


#endif /* ArkhamRoof_h */
