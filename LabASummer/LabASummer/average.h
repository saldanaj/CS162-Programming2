/*
 Author: Joaquin Saldana
 
 Date: 06/22/2016
 
 Description: header file for the the creation of an average class.  The class contains one member variable and one function.  The function calculates an array of type double average and returns the value to the user.  Once the 
 
 
 */


#ifndef AVERAGE_H
#define AVERAGE_H


class average
{
    private:
    
        /****************************
         totalAverage: 
         This member variable is initialized to zero (0) by the constructor. Ultimatley it's the value
         that's returned by the function arrayAverage.
         ****************************/
        double totalAverage;
    
    public:
    
        /*****************
        Class Constructor
        *****************/
    
        average();
    
        /****************************
         Function: arrayAverage (2 parameters)
         This function requires two functions, the array itself and the size of the array.
         The array is passed as a constant, read only, and the function traverses the array 
         w/ a for loop to add the values in the array together and then provide the average 
         of the array's values.
         ****************************/
    
        double arrayAverage(const double realNumberArray[], int arraySize);
    
};

#endif 
