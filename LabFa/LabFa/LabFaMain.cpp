/*
 Author: Joaquin Saldana 
 Date: 07/30/2016
 Description: this is the main file for LabFa lab.  This lab implements linked lists representing a stack and queue.  These lists 
 are singly list and contain a set of functions specific to each list type.  
 
 The main function will request the user to enter a set of integers, and then print them in accordance to the stack (last in first out) 
 and queue order (first in first out).
 */

#include "Stack.hpp"
#include "Queue.hpp"

int main()
{
    Stack s1;
    
    Queue q1;
    
    JoaquinsUtilities utility;
    
    int number = 0;
    
    string prompt1 = "What number would you like to add: ";
    
    cout << "This program will implement the use of a Stack and Queue.\nYou will be allowed to continue entering numbers until you type a character or string." << endl;
    cout << endl;
    cout << "The loop will then terminate and the program will print the number's in accordance to order of the\nStack (Last In First Out / LIFO) and Queue (First In First Out / FIFO)." << endl;
    cout << endl;
    
    
    while(utility.isANumber(number, prompt1))
    {
        s1.push(number);
        q1.addBack(number);
    }
    
    cout << "You entered a character suggesting you finished entering the list of numbers you wish to add" << endl;
    
    cout << endl;
    
    cout << "Below are the numbers you entered in order of a Stack" << endl;

    while(s1.isEmpty() != true)
    {
        number = s1.peek();
        cout << number << endl;
        
        s1.pop();
    }
    
    cout << endl;
    cout << "Below are the numbers you entered in order of a Queue" << endl;
    
    while(q1.isEmpty() != true)
    {
        number = q1.getFront();
        cout << number << endl;
        
        q1.removeFront();
    }
    
    cout << endl;
    cout << "Thank you for playing" << endl;
    
    return 0;
}
