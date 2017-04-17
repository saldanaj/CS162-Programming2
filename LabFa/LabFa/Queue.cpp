/*
 Author: Joaquin Saldana
 Date: 07/30/2016
 
 Description: this is the implementation file to the Queue class.  This class simulates a queue by allowing the user to enter values of type int and store them
 in the following order, First In First Out (FIFO).  The class implements a linked list while using pointers and holding int data types.
 */

#include "Queue.hpp"

// QUEUE CONSTRUCTOR

Queue::Queue()
{
    head = NULL;
    
    back = NULL;
}

// CLASS FUNCTIONS

/*
 Function: void addBack(int)
 Parameter: integer data type
 Description: adds a number to the back of the Queue structure.
 */

void Queue::addBack(int a)
{
    if(isEmpty())
    {
        head = new IntQueueNode(a);
        
        back = head;
    }
    else
    {
        IntQueueNode * temp = new IntQueueNode(a);
        
        back->next = temp;
        
        back = temp;
    }
}

/*
 Function: int getFront()
 Parameter: N/A
 Description: returns the int at the front of the list.  The first one added.  It does not delete/remove the node.
 */

int Queue::getFront()
{
    return head->value;
}

/*
 Function: void removeFront()
 Parameter: N/A
 Description: removes the front node in accordance to the first in first out rule.  It will be removing the first 
 node in the front of the structure.
 */

void Queue::removeFront()
{
    if(isEmpty())
    {
        cout << "The Queue is empty" << endl;
    }
    else
    {
        IntQueueNode * temp = head;
        
        head = head->next;
        
        delete temp;
    }
}

/*
 Function: bool isEmpty()
 Parameter: N/A
 Description: returns true if the list is empty, else it returns false.
 */

bool Queue::isEmpty()
{
    if(head == NULL)
    {
        back = NULL;
        
        return true;
    }
    else
    {
        return false;
    }
}





