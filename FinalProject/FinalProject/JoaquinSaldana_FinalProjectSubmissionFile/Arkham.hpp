/*
 Author: Joaquin Saldana
 Date: 08/02/2016
 Description: this is the header file to the "Arkham" space.  Once in the "Space", Batman will face another 
 riddle.  Once solved he will be able to move forward to the Arkham Roof, if he has the Bat Claw, to face 
 the Joker.
 */

#ifndef ARKHAM_HPP
#define ARKHAM_HPP 

#include "Space.hpp" 

class Arkham:public Space
{
    
    private:
    
    int choice;
    
    JoaquinsUtilities utilitybeltArkham;
    
    public:
    
    // CLASS CONSTRUCTOR
    
    Arkham();
    
    // CLASS DESTRUCTOR
    
//    ~Arkham();
    
    // GET METHODS
    
    int getChoice();
    
    // SET METHODS
    
    void setChoice(int i);
    
    // VIRTUAL FUNCTION
    
    void game();
    
};


#endif /* Arkham_h */
