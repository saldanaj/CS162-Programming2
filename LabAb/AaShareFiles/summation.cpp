/******************************************************************************
 ** Program Filename: summation.cpp                                          **
 ** Author:                                                **
 ** Date:                                           **
 ** Description: sum() definition, LabAa                                     **
 ** Input: array of doubles, integer size of the array                       **
 ** Output: double, summation of the array elements                          **
 ******************************************************************************/


/******************************************************************************
 ** Function: sum()                                                          **
 ** Description: returns the summation of an array of doubles                **
 ** Parameters: constant array of doubles, integer (size of array)           **
 ** Pre-Conditions: size > 0, array holds numeric values                     **
 ** Post-Conditions: summation of the array elements is returned as a double **
 ******************************************************************************/

#include "summation.hpp"

double sum(const double inputArray[], int size)
{
	/* holds the sum of all array elements */
    double sum = 0;

	for (int index = 0; index < size; index++)
	{
		sum += inputArray[index];
	}

	return sum;
}


