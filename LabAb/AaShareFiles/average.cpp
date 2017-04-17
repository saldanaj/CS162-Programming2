/******************************************************************************
 ** Program Filename: average.cpp                                            **
 ** Author:                                                **
 ** Date:                                                    **
 ** Description: ave() definition, LabAa                                     **
 ** Input: array of doubles, integer size of the array                       **
 ** Output: double, average of the array elements                            **
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
    return ( sum(inputArray, size) / size );
}

