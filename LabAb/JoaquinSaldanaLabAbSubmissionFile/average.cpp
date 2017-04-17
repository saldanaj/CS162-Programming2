/******************************************************************************
 ** Program Filename: average.cpp
 ** Author: I, Joaquin Saldana, am not the author of this file.
 ** Date: 07/15/16
 ** Description: ave() definition, LabAa , currently being used for Lab Ab
 ** Input: array of doubles, integer size of the array
 ** Output: double, average of the array elements                            
 ******************************************************************************/


/****************************************************************************
 ** Function: ave()                                                        **
 ** Description: returns the average of an array of doubles                **
 ** Parameters: constant array of doubles, integer (size of array)         **
 ** Pre-Conditions: size > 0, array holds numeric values                   **
 ** Post-Conditions: average of the array elements is returned as a double **
 ****************************************************************************/

#include "average.hpp"

double ave(const double inputArray[], int size)
{
    // function calls the the sum function from the Summation.cpp class
    // then it divides the total by the number of elements in the array
    
    return ( sum(inputArray, size) / size );
}

