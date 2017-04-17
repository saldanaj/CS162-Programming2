/*
 Author: Joaquin Saldana
 Date: 07/25/2016
 
 Description: this is the implementation file to the char node class.  This class creates a node that 
 holds a point to another char node and holds the data type char.  Ultimately this class will be used 
 to implement a ciruclar linked structure.
 */

#include "CharNode.hpp" 

// CLASS CONSTRUCTOR

CharNode::CharNode(char l, CharNode * next)
{
    // Assignment of the char letter and the next pointer
    
    letter = l;
    
    nextNode = next;
}

// *************************
// GET FUNCTIONS
// *************************

// RETURNS THE CHAR IN THE NODE

char CharNode::getLetter()
{
    return letter;
}

// RETURNS THE POINTER TO THE NEXT NODE

CharNode * CharNode::getNextNode()
{
    return nextNode;
}

// *************************
// SET FUNCTIONS
// *************************

// FUNCTION ALLOWS THE USER TO CHANGE THE CHAR MEMBER VARIABLE IN THE NODE TO ANOTHER CHAR

void CharNode::changeLetter(char l)
{
    letter = l;
}

// FUNCTION ALLOWS THE USER TO CHANGE THE NEXT NODE POINTER TO POINT TO A NEW NODE IF NECESSARY 

void CharNode::changePointer(CharNode * newPointer)
{
    nextNode = newPointer;
}

