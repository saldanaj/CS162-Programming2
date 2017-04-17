/*
 Author: Joaquin Saldana
 Date: 07/30/2016
 
 Description: this is the header file to the Queue class.  This class simulates a queue by allowing the user to enter values of type int and store them 
 in the following order, First In First Out (FIFO).  The class implements a linked list while using pointers and holding int data types.
 */

#ifndef QUEUE_HPP
#define QUEUE_HPP 

#include "JoaquinsUtilities.hpp" 

class Queue
{
    protected:
    
    /*
     INT NODE STRUCT INITIALIZED
     */
    
    struct IntQueueNode
    {
        int value;
        IntQueueNode * next;
        
        // NODE CONSTRUCTOR
        
        IntQueueNode(int v, IntQueueNode * nextNode = NULL)
        {
            value = v;
            next = nextNode;
        }
    };
    
        // CLASS POINTERS
    
        IntQueueNode * head;
    
        IntQueueNode * back;
    
    public:
    
        // CONSTRUCTOR
    
        Queue();
    
        // CLASS FUNCTIONS
    
        void addBack(int a);
    
        int getFront();
    
        void removeFront();
    
        bool isEmpty();
    
};


#endif /* Queue_h */
