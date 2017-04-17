/*
 Author: Joaquin Saldana
 Date: 08/09/16
 Description: This is the implementation file to the Bubble Sort class.  In file class we are going to sort a data file entered by the user and save it to the output file entered by the user.
 Below is the pseudocode on how this is going to be done.
 
 1. create the class constructor and the dynamic array
 2. read in the input file, and store the values in the file in the dynamic array
 3. traverse through the array N number of times (N = the total number of elements in the array), while traversing the array, have an inner loop that checks each value one by one if the value is greater
 than (ascending order) or less than (descending order) and then swaps the values as needed
 4. Once the values have been swapped then the elements in the array are written to the output file choosen by the user
 
 Citation: http://mathbits.com/MathBits/CompSci/Arrays/Bubble.htm
 
 */

#include "BubbleSort.hpp"

// CLASS CONSTRUCTOR

BubbleSort::BubbleSort()
{
    bubbleSortArray = new int[10];
    numberOfItemsInArray = 0;
    arraySize = 10;
}

// CLASS DESTRUCTOR

BubbleSort::~BubbleSort()
{
    delete [] bubbleSortArray;
}

// CLASS FUNCTIONS

/*
 Function: addToBubbleSortArray()
 Parameter: integer
 Description: the functions adds a number to the array, but most importantly, if the array is full it automatically doubles the dynamic array size and then adds the number to array
 */

void BubbleSort::addToBubbleSortArray(int number)
{
    if(numberOfItemsInArray >= arraySize)
    {
        int * tempArray = new int[arraySize * 2];
        
        for(int i = 0; i < numberOfItemsInArray; i++)
        {
            tempArray[i] = bubbleSortArray[i];
        }
        
        delete[] bubbleSortArray;
        
        bubbleSortArray = tempArray;
        
        tempArray = NULL;
    }
    
    bubbleSortArray[numberOfItemsInArray] = number;
    
    numberOfItemsInArray++;
}

/*
 Function: ascendingOrder()
 Parameters: ifstream file, ofstream file 
 Description: the function accepts a data file, reads it, stores the int values in a linear array, then sorts the list in ASCENDING order, then writes the values, in ascending order to output.  This is
 done by traversing the dynamic array N times (N = total number of elements in the array)
*/

void BubbleSort::ascendingOrder(ifstream &in, ofstream &out)
{
    int inputValueFromFile;
    
    // adding the values from the input file to the dynamic array
    
    while(in)
    {
        in >> inputValueFromFile;
        this->addToBubbleSortArray(inputValueFromFile);
    }
    
    int temp;
    
    // ascending bubble sort algorithm.  Traversing the array N times (total number of elements in the array)
    
    for(int i = 0; i < numberOfItemsInArray; i++)
    {
        for(int j = 0; j < numberOfItemsInArray - 1; j++)
        {
            if(bubbleSortArray[j] > bubbleSortArray[j+1])
            {
                temp = bubbleSortArray[j+1];
                bubbleSortArray[j+1] = bubbleSortArray[j];
                bubbleSortArray[j] = temp;
            }
            
        } // INNER FOR LOOP BRACKET
        
    } // OUT FOR LOOP BRACKET
    
    /*
     Now we write the integers in the array to the output data file
     */
    
    
    for(int a = 0; a < numberOfItemsInArray; a++)
    {
        out << bubbleSortArray[a];
        out << endl;
    }
}

/*
 Function: descendingOrder()
 Parameters: ifstream file, ofstream file
 Description: the function accepts a data file, reads it, stores the int values in a linear array, then sorts the list in DESCENDING order, then writes the values, in ascending order to output.  This is
 done by traversing the dynamic array N times (N = total number of elements in the array)
 */

void BubbleSort::descendingOrder(ifstream &in, ofstream &out)
{
    int inputValueFromFile;
    
    // adding the values from the input file to the dynamic array
    
    while(in)
    {
        in >> inputValueFromFile;
        this->addToBubbleSortArray(inputValueFromFile);
    }
    
    int temp;
    
    // ascending bubble sort algorithm.  Traversing the array N times (total number of elements in the array)
    
    for(int i = 0; i < numberOfItemsInArray; i++)
    {
        for(int j = 0; j < numberOfItemsInArray - 1; j++)
        {
            if(bubbleSortArray[j] < bubbleSortArray[j+1])
            {
                temp = bubbleSortArray[j+1];
                bubbleSortArray[j+1] = bubbleSortArray[j];
                bubbleSortArray[j] = temp;
            }
            
        } // INNER FOR LOOP BRACKET
        
    } // OUT FOR LOOP BRACKET
    
    /*
     Now we write the integers in the array to the output data file
     */
    
    
    for(int a = 0; a < numberOfItemsInArray; a++)
    {
        out << bubbleSortArray[a];
        out << endl;
    }
}









