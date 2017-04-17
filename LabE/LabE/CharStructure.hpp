/*
 Author: Joaquin Saldana 
 Date: 07/24/2016 
 
 Description: this is the header file to the circular linked char data structure.  This class implements
 the data structure and declares two pointers: 
 
 1. head pointer - which points to the first object placed in the structure and will be used when there is 
 a need to remove a node from the structure 
 
 2. back pointer - which points to the back node placed in the structure and will be used to insert a new
 node.
 */

#ifndef CHARSTRUCTURE_HPP
#define CHARSTRUCTURE_HPP

#include "CharNode.hpp" 

class CharStructure
{
    private:
    
        CharNode * headPointer;
    
        CharNode * backPointer;
    
    public:
    
        CharStructure();
    
        void push(char);
    
        char pop();
        
        bool isEmpty();
    
        // HELPER FUNCTIONS
    
        CharNode * getHeadPointer();
    
        CharNode * getBackPointer();
};

#endif /* CharStructure_h */
