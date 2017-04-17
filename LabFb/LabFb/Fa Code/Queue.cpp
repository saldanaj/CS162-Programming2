#include "Queue.hpp"

/* Constructor */
Queue::Queue(){
    head = back = NULL;
}
/* Destructor */
Queue::~Queue(){
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
** Function: addBack()
** Description: This function adds a number to the end of the linked
 * structure
** Parameters: This function takes a number as an argument and assigns
 * it to the num value in a node.
** Pre-Conditions: An object must already exist.
** Post-Conditions: A new node is created and added to the list.
*********************************************************************/
void Queue::addBack(int n){
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
** Function: getFront()
** Description: This function returns the number value stored in the
 * head node of the queue.
** Parameters: n/a
** Pre-Conditions: An object must already exist.
** Post-Conditions: n/a
*********************************************************************/
int Queue::getFront(){
    return head->num;
    
} // returns the value on top of the structure

/*********************************************************************
** Function: removeFront()
** Description: This function removes the node pointed to by the
 * head pointer.
** Parameters: n/a
** Pre-Conditions: An object must already exist.
** Post-Conditions: The head node is removed.
*********************************************************************/
void Queue::removeFront(){
    Node *temp = head;
    if(head == NULL){
        std::cout << "There are no more items on your list" << std::endl;
        return;
    }
    
    if(back == head){
        temp = head;
        head = back = NULL;
        delete temp;
        return;
    }
    else{
        temp = head;
        head = head->next;
        delete temp;
        return;
    }
    
} // removes the top item in the structure

/*********************************************************************
** Function: isEmpty()
** Description: This function checks on the status of the back
 * pointer to see if the queue is empty or not.
** Parameters: n/a
** Pre-Conditions: An object must already exist.
** Post-Conditions: n/a
*********************************************************************/
bool Queue::isEmpty(){
    return head == NULL;
}
