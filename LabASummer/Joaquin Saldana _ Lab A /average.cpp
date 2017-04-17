/*
 Author: Joaquin Saldana 
 Date: 06/22/16
 Description: .cpp file to the average.h file.  This file defines the constructor and average function which returns a double.  The function receives two parameters, an array (constant), and the size of the array.
 */

#include "average.h" 

/*****************
Class Constructor
 *****************/

average::average()
{
    totalAverage = 0;
}



/****************************
 Function: arrayAverage (2 parameters)
 This function requires two functions, the array itself and the size of the array.
 The array is passed as a constant, read only, and the function traverses the array
 w/ a for loop to add the values in the array together and then provide the average
 of the array's values.
 ****************************/

double average::arrayAverage(const double realNumberArray[] , int arraySize)
{
    for(int i = 0; i < arraySize; i++)
    {
        totalAverage += realNumberArray[i];
    }
    
    totalAverage = totalAverage / arraySize;
    
    return totalAverage;
}


