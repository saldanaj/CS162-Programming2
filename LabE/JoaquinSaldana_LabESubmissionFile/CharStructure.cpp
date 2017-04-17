/*
 Author: Joaquin Saldana
 Date: 07/24/2016
 
 Description: this is the implementation file to the circular linked char data structure.  This class 
 implements the data structure and declares two pointers:
 
 1. head pointer - which points to the first object placed in the structure and will be used when there is
 a need to remove a node from the structure
 
 2. back pointer - which points to the back node placed in the structure and will be used to insert a new
 node.
 */

#include "CharStructure.hpp"

// Constructor
// Initializes the head and back pointers to the ciruclar linked structure 

CharStructure::CharStructure()
{
    headPointer = NULL;
    
    backPointer = NULL;
}

// Function: push()
// Return: N/A
// Parmater: char
// Description: function adds to the structure.  It inserts the char at the end of the circular linked
// structure

void CharStructure::push(char l)
{
    if(isEmpty())
    {
        headPointer = new CharNode(l, NULL);
        backPointer = headPointer;
        headPointer->changePointer(backPointer);
    }
    else
    {
        CharNode * temp = new CharNode(l, NULL);
        
        temp->changePointer(backPointer->getNextNode());
        
        backPointer->changePointer(temp);
        
        backPointer = temp;
        
        temp = NULL; 
    }
    
}

// Function: pop()
// Return: Char data type
// Description: the function checks to see if the structure is empty first, if yesk then it only returns a
// statement to notify the user.  If not empty, it returns the char pointed to by the headpointer.

char CharStructure::pop()
{
    CharNode * temp;
    
    char charHolder;
    
    if(isEmpty())
    {
        cout << "The structure is empty";
        
        return ' ';
    }
    else
    {
        charHolder = headPointer->getLetter();
        
        temp = headPointer;
        
        headPointer = headPointer->getNextNode();
        
        delete temp;
        
        return charHolder;
    }
}

// Function: isEmpty()
// Return: True or False
// Description: this function checks if the circularly linked char structure is empty.  If so it returns
// true, else it returns false

bool CharStructure::isEmpty()
{
    //if(headPointer == NULL && backPointer == NULL)
    if(headPointer == NULL || backPointer == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}




