/*
 Author: Joaquin Saldana 
 Date: 08/12/16
 Description: this is the header file to the reverse polish notation calculator.  This header file will 
 define the function prototypes of the addition, subtraction, division, and multiplication operators.  
 
 */


#ifndef RPNCALCULATOR_HPP
#define RPNCALCULATOR_HPP

#include "Stack.hpp"
#include "JoaquinsUtilities.hpp" 

class RPNCalculator
{
    
    private:
    
        Stack * s1;
    
    public:
    
        // CLASS CONSTRUCTOR
    
        RPNCalculator(Stack *stackCreated);
    
        // CLASS DESTRUCTOR
    
//        ~RPNCalculator();
    
        // CLASS FUNCTIONS
    
        bool isAnOperator(string input);
    
        void divisionRPN();
    
        void multiplicationRPN();
    
        void additionRPN();
    
        void subtractionRPN();

};

#endif /* RPNCalculator_h */
