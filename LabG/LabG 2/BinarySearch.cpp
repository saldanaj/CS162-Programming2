/*
 Author: Joaquin Saldana
 Date: 08/09/2016
 Description: this is the implementation file to my binary search algorithm.  This algorithm finds the value by what I call "dividing and conquering".  The pseudocode for this algorithm is as follows:
 
 1. Create the dynamic array in the constructor to hold the values from the input data file
 2. pass the values from the data file to the dynamic array so we can search for the target value (file MUST be sorted)
 3. find the low, high, and middle values in the array.  From here we begin dividing and conquering.  The function finds to see if the middle value is the value were looking for, if not then it
 reassigns new values to the high and low digits which are then used to calculate the new middle number.  This loop continues until the number is found (bool value is true) or we've exhausted our
 left <= right number.
 4. user is informed if the value was found or not
 
 */

#include "BinarySearch.hpp"

// CLASS CONSTRUCTOR

BinarySearch::BinarySearch()
{
    binarySearchArray = new int[10];
    
    numberOfItemsInArray = 0;
    
    arraySize = 0;
    
    valueFound = false;
}

// CLASS DESTRUCTOR

BinarySearch::~BinarySearch()
{
    delete [] binarySearchArray;
}

// CLASS FUNCTIONS

/*
 Function: addToBinarySearchArray()
 Parameter: integer
 Description: the functions adds a number to the array, but most importantly, if the array is full it automatically doubles the dynamic array size and then adds the number to array
 */

void BinarySearch::addToBinarySearchArray(int number)
{
    if(numberOfItemsInArray >= arraySize)
    {
        int * tempArray = new int[arraySize * 2];
        
        for(int i = 0; i < numberOfItemsInArray; i++)
        {
            tempArray[i] = binarySearchArray[i];
        }
        
        delete[] binarySearchArray;
        
        binarySearchArray = tempArray;
        
        tempArray = NULL;
    }
    
    binarySearchArray[numberOfItemsInArray] = number;
    
    numberOfItemsInArray++;
}

/*
 Function: searchForValue()
 Parameter: ifstream file, integer target value
 Description: function reads the input file and adds the value to the dynamic array.  The function set's a middle value, and a low and high value.  The algorithm divides the array and determines if the 
 value in the middle is the target value, if the function does not find the number it then reassigns the high and low numbers and continues searching the middle number until it's found or there are no 
 numbers to compare.
 
 Citation: https://www.topcoder.com/community/data-science/data-science-tutorials/binary-search/
 
 */

void BinarySearch::searchForValue(ifstream &in, int targetValue)
{
    int valueFromFile;
    
    while(in)
    {
        in >> valueFromFile;
        this->addToBinarySearchArray(valueFromFile);
    }
    
    int low, high, middle;
    
    low = 0;
    
    high = numberOfItemsInArray - 1;
    
    while(low <= high)
    {
        middle = (low + high) / 2;
        
        if(binarySearchArray[middle] == targetValue)
        {
            valueFound = true;
            
            cout << endl;
            cout << "The value was found in position " << middle + 1 << " of the data file " << endl;
            cout << endl;
        }
        else if(binarySearchArray[middle] > targetValue)
        {
            high = middle - 1;
        }
        else if(binarySearchArray[middle] < targetValue)
        {
            low = middle + 1;
        }
    }
    
    if(valueFound == false)
    {
        cout << endl;
        cout << "The value was not found in the file you provided " << endl;
        cout << endl;
    }
}
























