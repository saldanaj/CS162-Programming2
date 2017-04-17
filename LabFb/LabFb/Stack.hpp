#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include <stdlib.h>

class Stack{
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
    Stack();
    ~Stack();
    void push(int); // puts on item onto the structure
    int peek(); // returns the value on top of the structure
    void pop(); // removes the top item in the structure
    bool isEmpty();
};


#endif /* STACK_HPP */

