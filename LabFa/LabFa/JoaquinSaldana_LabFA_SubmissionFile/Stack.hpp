/*
 Author: Joaquin Saldana 
 Date: 07/30/2016 
 
 Description: this is the header file to the Stack class.  This class simulates a stack by allowing the user to enter values of
 type int and store them in the following order, Last In First Out (LIFO).  The class implements a linked list while using pointers
 and holding int data types.
 */

#ifndef STACK_HPP
#define STACK_HPP

#include "JoaquinsUtilities.hpp"

class Stack
{
    protected:
    
    /*
     INT NODE STRUCT INITIALIZED
     */
    
    struct IntStackNode
    {
        int value;
        IntStackNode * next;
        
        // NODE CONSTRUCTOR
        IntStackNode(int v, IntStackNode * nextNode = NULL)
        {
            value = v;
            next = nextNode;
        }
    };
    
        // HEAD NODE POINTER
    
        IntStackNode * head;
    
    public:
    
        // CONSTRUCTOR
    
        Stack();
    
        // CLASS FUNCTIONS
    
        void push(int a);
    
        int peek();
    
        void pop();
    
        bool isEmpty();
};


#endif /* Stack_h */
