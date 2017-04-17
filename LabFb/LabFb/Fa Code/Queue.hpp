#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>
#include <stdlib.h>

class Queue{
private:
    struct Node{
        int num;
        Node *next;
        Node(int n, Node *next1 = NULL){
            num = n;
        }
    };
    Node *head;
    Node *back;
    
public:
    Queue();
    ~Queue();
    void addBack(int); // puts on item at the end of the structure
    int getFront(); // returns the value at the front of the structure
    void removeFront(); // removes the first item in the structure
    bool isEmpty();
};


#endif /* QUEUE_HPP */

