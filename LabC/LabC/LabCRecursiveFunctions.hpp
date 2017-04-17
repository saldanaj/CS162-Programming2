/*
 Author: Joaquin Saldana 
 
 Description: This is the recursive funnction header file for Lab C.  In this file you will find the 
 prototypes to the functions which will accept input, reverse an array of chars, and output the results 
 to console.  Main program will save the results in an output file.
 */

#ifndef LABCRECURSIVEFUNCTIONS_HPP
#define LABCRECURSIVEFUNCTIONS_HPP

#include "JoaquinsUtilities.hpp" 

const int CHARARRAYSIZE = 50; 

class LabCRecursiveFunctions
{
    
    private:
    
        char * copyOfCharArray;
    
    
    public:
    
        LabCRecursiveFunctions();
    
        ~LabCRecursiveFunctions();
    
        void reverseCharArray(char * charArray);
    
        char * getCharArray(); 
};

#endif /* LabCRecursiveFunctions_h */
