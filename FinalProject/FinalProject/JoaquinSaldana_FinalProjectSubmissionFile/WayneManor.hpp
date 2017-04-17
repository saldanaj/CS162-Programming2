/*
 Author: Joaquin Saldana
 Date: 08/02/2016
 Description: this is the header file for the "Space" which is titled Wayne Manor.  Batman will be presented with another Riddle, and when answered correctly will be equipped wit hthe Batarang.
 */

#ifndef WAYNEMANOR_HPP
#define WAYNEMANOR_HPP

#include "Space.hpp" 
#include "JoaquinsUtilities.hpp"


class WayneManor:public Space
{
    private:
    
    int choice;
    
    JoaquinsUtilities utilityWayneManor;
    
//    string b; 
    
    public:
    
    // CLASS CONSTRUCTOR
    
    WayneManor();
    
    // CLASS DESTRUCTOR
    
//    ~WayneManor();
    
    // GET METHODS
    
    int getChoice();
    
    string getBatarang(); 
    
    // SET METHODS
    
    void setChoice(int i);
    
    // VIRTUAL FUNCTION
    
    void game();
    
};

#endif /* WayneManor_h */
