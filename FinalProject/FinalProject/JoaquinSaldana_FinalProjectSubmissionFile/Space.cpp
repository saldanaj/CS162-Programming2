/*
 Author: Joaquin Saldana
 Date: 08/02/2016
 Description: This is the implemenation file for the "Space" abstract class.  This class will be the base class for all of the "environments" Batman will be moving through 
 in order to find the Joker.  With this class we will create several environments that will force batman to choose certain and move through the game.
 */

#include "Space.hpp"

// CLASS CONSTRUCTOR

Space::Space(string name)
{
    spaceName = name;
    
    pointer1 = NULL;
    
    pointer2 = NULL;
    
    pointer3 = NULL;
    
    pointer4 = NULL;
    
    spaceCompleted = false;
}

// CLASS DESTRUCTOR

//Space::~Space()
//{
//    delete pointer1;
//    
//    delete pointer2;
//    
//    delete pointer3;
//    
//    delete pointer4;
//    
//    pointer1 = NULL;
//    
//    pointer2 = NULL;
//    
//    pointer3 = NULL;
//    
//    pointer4 = NULL;
//}

// CLASS GET METHODS

string Space::getSpaceName()
{
    return spaceName;
}

Space * Space::getPointer1()
{
    return pointer1;
}

Space * Space::getPointer2()
{
    return pointer2;
}

Space * Space::getPointer3()
{
    return pointer3;
}

Space * Space::getPointer4()
{
    return pointer4;
}

bool Space::isSpaceCompleted()
{
    return spaceCompleted;
}

// CLASS SET METHODS

void Space::setPointer1(Space * p1)
{
    pointer1 = p1;
}

void Space::setPointer2(Space * p2)
{
    pointer2 = p2;
}

void Space::setPointer3(Space * p3)
{
    pointer3 = p3;
}

void Space::setPointer4(Space * p4)
{
    pointer4 = p4;
}

void Space::setSpaceCompleted(bool tF)
{
    spaceCompleted = tF;
}





