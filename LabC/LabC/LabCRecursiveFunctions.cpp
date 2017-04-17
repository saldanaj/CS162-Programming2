/*
 Author: Joaquin Saldana
 
 Description: This is the recursive funnction implementation file for Lab C.  In this file you will find 
 the prototypes to the functions which will accept input, reverse an array of chars, 
 and output the results to console.  Main program will save the results in an output file.
 
 */


#include "LabCRecursiveFunctions.hpp"


LabCRecursiveFunctions::LabCRecursiveFunctions()
{
    copyOfCharArray = new char[CHARARRAYSIZE];
    
    
    for(int i = 0; i < CHARARRAYSIZE; i++)
    {
        copyOfCharArray[i] = NULL;
    }
}

LabCRecursiveFunctions::~LabCRecursiveFunctions()
{
    delete [] copyOfCharArray;
}

void LabCRecursiveFunctions::reverseCharArray(char *charArray)
{
    int i = 0;
    
    if(* charArray == '\0')
    {
        return;
    }
    else
    {
        reverseCharArray(charArray+1);
        
        cout << *charArray;
    }
}