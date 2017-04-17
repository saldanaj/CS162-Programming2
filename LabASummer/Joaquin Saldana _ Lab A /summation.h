/*
 Author: Joaquin Saldana 
 Date: 06/26/16
 Description: This is the header file for the summation file.  This file will contain a function which produces the sum of an array of data type DOUBLE.
 */

#ifndef SUMMATION_H
#define SUMMATION_H


class summation
{
    
    private:
    
        /****************************
        arrayTotal:
        This member variable is initialized to zero (0) by the constructor. Ultimatley it's the value
        that's returned by the function arraySummation.
        ****************************/
    
        double arrayTotal;
    
    public:
    
        /*****************
        Class Constructor
        *****************/
    
        summation();
    
        /****************************
        Function: arraySummation (2 parameters)
        This function requires two functions, the array itself and the size of the array.
        The array is passed as a constant, read only, and the function traverses the array
        w/ a for loop to add the values in the array.
        ****************************/
    
        double arraySummation(const double[], int arraySize);
    
};

#endif /* summation_h */
