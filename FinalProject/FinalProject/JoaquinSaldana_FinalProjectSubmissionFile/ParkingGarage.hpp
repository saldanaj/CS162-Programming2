/*
 Author: Joaquin Saldana
 Date: 08/02/2016
 Description: this is the header file to a "Parking Garage" which is derived from the "Space" class.  In this class the user/Batman will meet with the Riddler and if the riddle is solved he will 
 have gained access to the BatCave.
 */


#ifndef PARKINGGARAGE_HPP
#define PARKINGGARAGE_HPP

#include "Space.hpp"

class ParkingGarage:public Space
{
    private:
    
        // int to record the choice by the user
    
        int choice;
    
        JoaquinsUtilities utilityParkingGarage;
    
    public:
    
        // CLASS CONSTRUCTOR
    
        ParkingGarage();
    
        // CLASS DESTRUCTOR
    
//        ~ParkingGarage();
    
        // GET METHODS
    
        int getChoice();
    
        // SET METHODS
    
        void setChoice(int i);
    
        // VIRTUAL FUNCTION
    
        void game();
    
};


#endif /* ParkingGarage_h */
