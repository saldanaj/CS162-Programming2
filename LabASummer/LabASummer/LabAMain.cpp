/*
 Author: Joaquin Saldana 
 
 Date: 06/22/16
 
 Description: main .cpp for Lab A.  Testing the average.cpp and summation.cpp files to ensure the outputs are correct.
 */

#include "average.h" 
#include "summation.h"

#include <iostream>

using namespace std;


int main()
{
    int numbersToAdd;
    
    double temp;
    
    // prompt user to enter the number of values he wishes to add to the array
    // this will be array's size
    
    cout << "Welcome, this program provides the sum and average of a list of numbers.  How many numbers would you like to add to the list? " << endl;
    
    // input validation ensuring the user is entering
    // a number and not a character or string
    
    while(!(cin >> numbersToAdd))
    {
        cout << "You must enter a number.  How many numbers do you wish to add to the list? " << endl;
        
        cin.clear();
        cin.ignore(100, '\n');
    }
    
    // initialization of pointer and dynamic array
    // arraysize is the value numberToAdd
    
    double * myArray = new double[numbersToAdd];
    
    
    int i = 0;
    
    // prompts the user to enter the values/numbers he wishes to add to the list
    // the input is validated to ensure it's a number and not char or string
    
    while(i < numbersToAdd)
    {
        
        cout << "Please provide a number you wish to add to the list: " << endl;
        
        // input validation
        
        while(!(cin >> temp))
        {
            cout << "You did not enter a number.  Please enter a whole or decimal number: " << endl;
            cin.clear();
            cin.ignore(100, '\n');
        }
        
        myArray[i] = temp;
        
        i++;
    }
    
    
    // initialization of the average class and the summation class
    
    average arrayOne;
    
    summation arrayTwo;
    
    // output which includes the array's sum and average
    
    cout << "The sum of the " << numbersToAdd << " numbers you entered is: " << arrayTwo.arraySummation(myArray, numbersToAdd) << endl;
    
    cout << "This average of the " << numbersToAdd << " numbers you entered is: " << arrayOne.arrayAverage(myArray, numbersToAdd) << endl;
    
    
    // deaallocation of the dynamic array
    
    delete[] myArray;
    
    // pointer is set to NULL
    
    myArray = NULL;
     
    return 0;
}


