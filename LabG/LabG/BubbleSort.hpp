/*
 Author: Joaquin Saldana 
 Date: 08/09/16
 Description: This is the header file to the Bubble Sort class.  In file class we are going to sort a data file entered by the user and save it to the output file entered by the user.  
 Below is the pseudocode on how this is going to be done.  
 
 1. create the class constructor and the dynamic array 
 2. read in the input file, and store the values in the file in the dynamic array 
 3. traverse through the array N number of times (N = the total number of elements in the array), while traversing the array, have an inner loop that checks each value one by one if the value is greater 
 than (ascending order) or less than (descending order) and then swaps the values as needed 
 4. Once the values have been swapped then the elements in the array are written to the output file choosen by the user
 
 Citation: http://mathbits.com/MathBits/CompSci/Arrays/Bubble.htm
 
 */

#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP

#include "JoaquinsUtilities.hpp"


class BubbleSort
{
    private:
    
        int * bubbleSortArray;
    
        int numberOfItemsInArray;
    
        int arraySize;
    
    public:
    
        // CLASS CONSTRUCTOR
    
        BubbleSort();
    
        // CLASS DESTRUCTOR
    
        ~BubbleSort();
    
        // CLASS FUNCTIONS
    
        void addToBubbleSortArray(int number);
    
        void ascendingOrder(ifstream &in, ofstream &out);
    
        void descendingOrder(ifstream &in, ofstream &out);
};


#endif /* BubbleSort_h */
