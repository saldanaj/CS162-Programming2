/*
 Author: Joaquin Saldana
 Date: 08/08/2016
 Description: this is the implementation file for my own linear search class.  In this class, we will look for a target value in a list of numbers linearly without random selection and regardless if the file
 is sorted or not.
 
 Below is the pseudocode for my class:
 
 1. Class constructor creates a dynamic array
 2. Function numberPosition() reads from the file and adds the number's to the dynamic array.  Along the way, if the array is full, but we need to continue reading, we double the array size.  Doubling
 the array size is built in the class addToLinearArray() function
 3. Once we've reached end of file, and all the values are in the array, we begin to check linearly by iterating through the array is the value is present in the array and if so in which position.
 This is done with a while loop which breaks if either the value is found (boolean valueFound changes to true) or we've exhausted all of the elements of the array.
 
 This i created on MY OWN.  I did not borrow any code from any site or author.
 
 */


#include "LinearSearch.hpp"

// CLASS CONSTRUCTOR

LinearSearch::LinearSearch()
{
    linearArray = new int[10];
    
    numberOfItemsInArray = 0;
    
    arraySize = 10;
    
    valueFound = false;
}

// CLASS DESTRUCTOR

LinearSearch::~LinearSearch()
{
    delete linearArray;
}

// CLASS FUNCTIONS

/*
 Function: addToLinearArray()
 Parameter: integer 
 Description: the functions adds a number to the array, but most importantly, if the array is full it automatically doubles the dynamic array size and then adds the number to array
 */

void LinearSearch::addToLinearArray(int number)
{
    if(numberOfItemsInArray >= arraySize)
    {
        int * tempArray = new int[arraySize * 2];
        
        for(int i = 0; i < numberOfItemsInArray; i++)
        {
            tempArray[i] = linearArray[i];
        }
        
        delete[] linearArray;
        
        linearArray = tempArray;
        
        tempArray = NULL;
    }
    
    linearArray[numberOfItemsInArray] = number;
    
    numberOfItemsInArray++;
}

/*
 Function: numberPosition()
 Parameter: ifstream file, ofstream file, integer target value
 Description: using the class function addToLinearArray, the function reads from the file and adds the integers to the dynamic array of the class. After wards, the function looks for the target value 
 and if found the user is notified of the values position in the file.  If not, the user is informed the value is not present in the file.
 */

void LinearSearch::numberPosition(ifstream &in, int targetValue)
{
    int position = 0;
    int valueFromFile;
    
    while(in)
    {
        in >> valueFromFile;
        this->addToLinearArray(valueFromFile);
    }
    
    while(valueFound != true && position < numberOfItemsInArray)
    {
        if(linearArray[position] == targetValue)
        {
            valueFound = true;
            
            cout << endl;
            cout << "The value was found.  It was found in position " << position + 1<< " in the data file" << endl;
            cout << endl;
        }
        else
        {
            position++;
        }
    }
    
    if(valueFound == false)
    {
        cout << endl;
        cout << "The value waas not found in the file " << endl;
        cout << endl;
    }

}













