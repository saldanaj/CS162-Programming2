/*
 * Author: Joaquin Saldana
 * 
 * Project: LabAb
 * 
 * Description: this main put's together a program which includes average.hpp/.cpp and summation.hpp/.cpp
 * The average.hpp/.cpp files call on the sum function in the summation.hpp.cpp files in order to 
 * calculate the average of the array.  
 *
 */

#include "average.hpp" 
#include "summation.hpp"
#include "JoaquinsUtilities.hpp"

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
        
        cout << "Please provide a number you wish to add to the list: ";
        
        // input validation
        
        while(!(cin >> temp))
        {
            cout << endl;
            cout << "You did not enter a number.  Please enter a whole or decimal number: " ;
            cin.clear();
            cin.ignore(100, '\n');
        }
        
        myArray[i] = temp;
        
        i++;
        
        cout << endl; 
    }
    
    
    /* Implementation of the summation and average .hpp/.cpp files from another author.
     */
    
    // output which includes the array's sum and average
    
    cout << "The sum of the " << numbersToAdd << " numbers you entered is: " << sum(myArray, numbersToAdd) << endl;
    
    cout << "This average of the " << numbersToAdd << " numbers you entered is: " << ave(myArray, numbersToAdd) << endl;
    
    
    // deaallocation of the dynamic array
    
    delete[] myArray;
    
    // pointer is set to NULL
    
    myArray = NULL;
    
    
    return 0;
}
