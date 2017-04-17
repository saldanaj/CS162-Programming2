/*
 Author: Joaquin Saldana
 Date: 08/12/16
 Description: this is the main function to Lab Fb in which we invoke the another students Stack and Queue 
 class to implement a post fix calculator.  
 
 Code citation ...
 
 RPN Code Help: https://www.youtube.com/watch?v=zla7ha0OORM
 
 */

#include "Queue.hpp"
#include "Stack.hpp"
#include "JoaquinsUtilities.hpp"
#include "RPNCalculator.hpp"


int main()
{
    cout << "Welcome to the RPN Calculator " << endl;
    cout << endl;
    
    Stack * stackOne = new Stack;
    
    RPNCalculator rpn1(stackOne);
    
    string input;
    
    while(true)
    {
        cout << "Please enter a number or operand or \"q\" to quit: ";
        
        cin >> input;
        
        int number;
        
        if(std::istringstream(input) >> number)
        {
            stackOne->push(number);
        }
        else if(rpn1.isAnOperator(input))
        {
            if(input == "-")
            {
                rpn1.subtractionRPN();
            }
            if(input == "+")
            {
                rpn1.additionRPN();
            }
            if(input == "*")
            {
                rpn1.multiplicationRPN();
            }
            if(input == "/")
            {
                rpn1.divisionRPN();
            }
        }
        else if(input == "q")
        {
            delete stackOne;
            
            return 0;
        }
        else
        {
            cout << endl;
            cout << "Your input was invalid please try again " << endl;
            cout << endl;
        }
    }
    
} // END OF MAIN

