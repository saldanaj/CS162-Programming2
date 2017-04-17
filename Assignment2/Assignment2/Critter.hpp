/***************************************************************************************
 Author: Joaquin Saldana 
 Date: 07/06/16
 
 Description: This is the header file for the Critter class.  This class will act as the 
 base class for the Ant and Doodlebug classes to come.
 
 Acting as the base class, this class will have the following data members: 
 
 1. bool hasMoved - to track if the Criter has moved or not 
 2. int breedCounter - keeps track the number of moves of the Critter and if it's time to breed 
 3. int deathCounter - also keeps track the number of moves the Critter has made but may be reset when appropriate
 
 This class will establish the following virtual functions for the Critter object/class:
 
 1. move() - generates a number/direction in which the Critter is to move.  The number is 
 generated randomly.  Each number will represent either up, down, right or left.  This function 
 was not identified as a virtual function since it perform the same for all derived classes.  
 
 2. eat() - receives a Critter object, and checks to see if it's pointing to NULL or
 pointing to a Critter.  If NULL, the Critter will move to the space, if the Critter 
 pointer holds another Critter then it will not move or eat the Critter.
 
 3. breed() - boolean function.  It returns true if the Critter has reached it's counter
 limit to bread, resets the counter as well.  If it has not then it returns false.
 
 4. isAlive() - verifies if the Critter has reached its maximum lifespan.  If so, then 
 it returns false.  Else it will return true.  Each Critter will have their own
 respective life span.
 
 Since they are defined as virtual, the functions will have to be overriden by the 
 derived classes.
 
***************************************************************************************/

#ifndef CRITTER_HPP
#define CRITTER_HPP 

#include "JoaquinsUtilities.hpp"


class Critter
{
    
    protected:
    
        bool hasMoved;
    
        bool hasEaten;
    
        int breedCounter;
    
        int deathCounter;
    
    public:
    
        // CONSTRUCTOR
    
        Critter();
    
        // GET FUNCTIONS
    
        bool hasTheCritterMoved();
    
        bool getHasEaten();
    
        int getBreedCounter();
    
        int getDeathCounter();
    
        virtual string critterName();
    
    
        // SET FUNCTIONS
    
        void resetHasMoved();
    
        void resetHasEaten();
    
        void resetDeathCounter();
    
        // CLASS FUNCTIONS
    
        int move(); // this function is is the same for all classes as a result it is not a virtual function
    
        virtual void eat(Critter* nextPosition);
    
        virtual bool breed();
    
        virtual bool isAlive();
    
    
};


#endif /* Critter_hpp */
