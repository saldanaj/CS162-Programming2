/*
 Author: Joaquin Saldana
 Date: 08/02/2016
 Description: this is the header file to the Batcave "Space" where Batman can find the Batclaw in order to climb the "Roof" to get to the Joker
 */

#ifndef BATCAVE_HPP
#define BATCAVE_HPP 

#include "Space.hpp" 

class BatCave:public Space
{
    private:
    
    int choice;
    
//    string b;
    
    public:
    
    // CLASS CONSTRUCTOR
    
    BatCave();
    
    // GET METHODS
    
    int getChoice();
    
    string getBatClaw();
    
    // SET METHODS

    void setChoice(int i);
    
    // VIRTUAL FUNCTION
    
    void game();

};





#endif /* BatCave_h */
