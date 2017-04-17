/*
 Author: Joaquin Saldana 
 Date: 07/25/2016 
 
 Description: this is the header file to the char node class.  This class creates a node that holds a 
 point to another char node and holds the data type char.  Ultimately this class will be used to implement 
 a ciruclar linked structure.
 */

#ifndef CHARNODE_HPP
#define CHARNODE_HPP

#include "JoaquinsUtilities.hpp"

class CharNode
{
    // PROTECTED MEMBER VARIABLES
    
    protected:
    
        char letter;
    
        CharNode * nextNode;
    
    // PUBLIC FUNCTIONS OF THE NODE 
    
    public:
    
        CharNode (char l, CharNode * next);
    
        CharNode * getNextNode();
    
        char getLetter();
    
        void changeLetter(char l);
    
        void changePointer(CharNode * newPointer); 
    
    
};


#endif /* CharNode_h */
