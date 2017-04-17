/*
 Author: Joaquin Saldana
 Date: 07/30/2016
 
 Description: this is the implementation file to the Stack class.  This class simulates a stack by allowing the user to enter values of
 type int and store them in the following order, Last In First Out (LIFO).  The class implements a linked list while using pointers
 and holding int data types.
 */

#include "Stack.hpp" 

// STACK CONSTRUCTOR

Stack::Stack()
{
    head = NULL;
}

// CLASS FUNCTIONS

/*
 Function: void push(int)
 Parameter: integer data type 
 Description: this function adds a node holding an integer data type to the "Stack" structure
 */

void Stack::push(int a)
{
    IntStackNode * temp;
    
    if(isEmpty())
    {
        // list is empty meaning the head pointer is pointing to NULL
        // create the new int node
        
        temp = new IntStackNode(a);
        
        // assign the new int node to the head pointer
        
        head = temp;
    }
    else
    {
        // list is not empty
        // create the new int node
        
        temp = new IntStackNode(a);
        
        // new int node next pointer will point to where head is pointing to
        
        temp->next = head;
        
        // head will now point to temp
        
        head = temp;
    }
}

/*
 Function: int peek()
 Parameter: N/A
 Description: function returns the int sitting at the top of the Stack.  It does not remove the int from the list.
 */

int Stack::peek()
{
    return head->value;
}

/*
 Function: void pop()
 Parameter: N/A
 Description: function removes the node/value at the top of the Stack.  It does NOT return the value.  The funciton 
 simply removes the node from the list.
 */

void Stack::pop()
{
    if(isEmpty())
    {
        cout << "The Stack is empty" << endl;
    }
    else
    {
        IntStackNode * temp;
        
        temp = head;
        
        head = head->next;
        
        delete temp;
    }
}

/*
 Function: bool isEmpty()
 Parameter: N/A
 Description: function returns a boolean data type (true or false) if the head pointer is pointing to NULL meaning the list 
 is empty.
 */

bool Stack::isEmpty()
{
    if(head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}










