/*
 Author: Joaquin Saldana
 Date: 06/26/16
 Description: This is the .cpp file for the summation file.  This file will contain a function which produces the sum of an array of data type DOUBLE.  The function will require two parameters which are the address to the array and the arraySize.
 */

#include "summation.h" 


/*****************
 Class Constructor
 *****************/

summation::summation()
{
    arrayTotal = 0;
}



/****************************
 Function: arraySummation (2 parameters)
 This function requires two functions, the array itself and the size of the array.
 The array is passed as a constant, read only, and the function traverses the array
 w/ a for loop to add the values in the array.
 ****************************/

double summation::arraySummation(const double numberArray[], int arraySize)
{
    
    for(int i = 0; i < arraySize; i++)
    {
        arrayTotal += numberArray[i];
    }
    
    return arrayTotal;
}

