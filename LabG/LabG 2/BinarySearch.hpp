/*
 Author: Joaquin Saldana 
 Date: 08/09/2016
 Description: this is the header file to my binary search algorithm.  This algorithm finds the value by what I call "dividing and conquering".  The pseudocode for this algorithm is as follows: 
 
 1. Create the dynamic array in the constructor to hold the values from the input data file 
 2. pass the values from the data file to the dynamic array so we can search for the target value (file MUST be sorted) 
 3. find the low, high, and middle values in the array.  From here we begin dividing and conquering.  The function finds to see if the middle value is the value were looking for, if not then it 
 reassigns new values to the high and low digits which are then used to calculate the new middle number.  This loop continues until the number is found (bool value is true) or we've exhausted our 
 left <= right number.  
 4. user is informed if the value was found or not
 
 Citation: https://www.topcoder.com/community/data-science/data-science-tutorials/binary-search/
 
 */

#ifndef BINARYSEARCH_HPP
#define BINARYSEARCH_HPP

#include "JoaquinsUtilities.hpp"

class BinarySearch
{
    
    private:
    
        int * binarySearchArray;
    
        int numberOfItemsInArray;
    
        int arraySize;
    
        bool valueFound;
    
    public:
    
        // CLASS CONSTRUCTOR
    
        BinarySearch();
    
        // CLASS DESTRUCTOR
    
        ~BinarySearch();
    
        // CLASS FUNCTIONS
    
        void addToBinarySearchArray(int number);
    
        void searchForValue(ifstream &in, int targetValue); 
    
};


#endif /* BinarySearch_h */
