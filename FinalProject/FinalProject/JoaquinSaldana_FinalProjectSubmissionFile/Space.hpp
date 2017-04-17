/*
 Author: Joaquin Saldana 
 Date: 08/02/2016 
 Description: This is the header file for the "Space" abstract class.  This class will be the base class for all of the "environments" Batman will be moving through in order to find
 the Joker.  With this class we will create several environments that will force batman to choose certain and move through the game.
 */

#ifndef SPACE_HPP
#define SPACE_HPP 

#include "JoaquinsUtilities.hpp"

class Space
{
    private:
    
        // CLASS MEMBER VARIABLES
    
        string spaceName;
    
        Space * pointer1;
    
        Space * pointer2;
    
        Space * pointer3;
    
        Space * pointer4;
    
        bool spaceCompleted;
    
    public:
    
        // CLASS CONSTRUCTOR
    
        Space(string name);
    
        // CLASS DESTRUCTOR
    
//        ~Space();

        // GET METHODS
    
        string getSpaceName();
    
        Space * getPointer1();
    
        Space * getPointer2();
    
        Space * getPointer3();
    
        Space * getPointer4();
    
        bool isSpaceCompleted();
    
        // SET METHODS
    
        void setPointer1(Space * p1);
    
        void setPointer2(Space * p2);
    
        void setPointer3(Space * p3);
    
        void setPointer4(Space * p4);
    
        void setSpaceCompleted(bool tF);
    
        // PURE VIRTUAL FUNCTION
    
        virtual void game() = 0;
    
};


#endif /* Space_h */
