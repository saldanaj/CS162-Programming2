/*
 Author: Joaquin Saldana 
 Date: 08/02/2016
 Description: this is the header file for the "Space" where Batman will commence the game. This space will be at the center of where he will be moving through the environment/game.  
 From here he will have access to four spaces, although a few will be restricted until he successfully solves other "Spaces"
 */

#ifndef STREET_H
#define STREET_H

#include "Space.hpp"

class Street:public Space
{
    private:
    
        int choice;
    
        JoaquinsUtilities utility1;
    
    public:
    
        // CLASS CONSTRUCTOR
    
        Street();
    
//        ~Street();
    
        // GET METHODS
    
        int getChoice();
    
        // SET METHODS
    
        void setChoice(int i);
    
        // VIRTUAL FUNCTIONS
    
        void game();
    
};


#endif /* Street_h */
