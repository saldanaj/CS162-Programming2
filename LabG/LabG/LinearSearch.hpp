/*
 Author: Joaquin Saldana 
 Date: 08/08/2016
 Description: this is the header file for my own linear search class.  In this class, we will look for a target value in a list of numbers linearly without random selection and regardless if the file 
 is sorted or not.  
 
 Below is the pseudocode for my class: 
 
 1. Class constructor creates a dynamic array 
 2. Function numberPosition() reads from the file and adds the number's to the dynamic array.  Along the way, if the array is full, but we need to continue reading, we double the array size.  Doubling 
 the array size is built in the class addToLinearArray() function 
 3. Once we've reached end of file, and all the values are in the array, we begin to check linearly by iterating through the array is the value is present in the array and if so in which position.  
 This is done with a while loop which breaks if either the value is found (boolean valueFound changes to true) or we've exhausted all of the elements of the array.
 
 This i created on MY OWN.  I did not borrow any code from any site or author.
 
 */

#include "JoaquinsUtilities.hpp"

#ifndef LINEARSEARCH_HPP
#define LINEARSEARCH_HPP

class LinearSearch
{
    private:
    
        int * linearArray;
    
        int numberOfItemsInArray;
    
        int arraySize;
    
        bool valueFound;
    
    public:
    
        // CLASS CONSTRUCTOR
    
        LinearSearch();
    
        // CLASS DESTRUCTOR
    
        ~LinearSearch();
    
        // CLASS FUNCTIONS
    
        void addToLinearArray(int);
    
        void numberPosition(ifstream &in, int targetValue);
    
};

#endif /* LinearSearch_h */
