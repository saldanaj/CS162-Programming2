#include <iostream>
#include <fstream>
#include "Stack.hpp"

/* Constructor */
Stack::Stack(){
    head = back = NULL;
}

/* Destructor */
Stack::~Stack(){
    Node *nodePtr = head;
    while (nodePtr != back){
        Node *garbage = nodePtr; //assigns garbage ptr to the current node
        nodePtr = nodePtr->next; //moves up linked list 
        delete garbage; //deletes previous "garbage" node
    }  
    delete nodePtr;
    head = back = NULL;
}

/*********************************************************************
** Function: push()
** Description: This function adds a number to the end of the linked
 * structure
** Parameters: This function takes a number as an argument and assigns
 * it to the num value in a node.
** Pre-Conditions: An object must already exist.
** Post-Conditions: A new node is created and added to the list.
*********************************************************************/
void Stack::push(int n){
    Node *temp = new Node(n);
    if (isEmpty()){
        head = back = temp;
    }
    else{
        back->next = temp;
        back = temp;
    }
} // puts on item onto the structure

/*********************************************************************
** Function: peek()
** Description: This function returns the number value stored in the
 * back node of the stack.
** Parameters: n/a
** Pre-Conditions: An object must already exist.
** Post-Conditions: n/a
*********************************************************************/
int Stack::peek(){
    return back->num;
} // returns the value on top of the structure

/*********************************************************************
** Function: pop()
** Description: This function removes the node pointed to by the
 * back pointer. 
** Parameters: n/a
** Pre-Conditions: An object must already exist.
** Post-Conditions: The head node is removed.
*********************************************************************/
void Stack::pop(){
    Node *temp = head;
    if(head == NULL){
        std::cout << "There are no more items on your list" << std::endl;
        return;
    }
    
    if(back == head){
        temp = back;
        head = back = NULL;
        delete temp;
        return;
    }
    else{
        while(temp->next != back){
            temp = temp->next;
        }
        back = temp;
        temp = temp->next;
        delete temp;
    }
    
} // removes the top item in the structure

/*********************************************************************
** Function: isEmpty()
** Description: This function checks on the status of the back
 * pointer to see if the list is empty or not.
** Parameters: n/a
** Pre-Conditions: A list object must already exist.
** Post-Conditions: n/a
*********************************************************************/
bool Stack::isEmpty(){
    return head == NULL;
}