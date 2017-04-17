/*
 Author: Joaquin Saldana 
 Date: 07/24/16
 Description: this is the impelmentation file for Lab E meant to simulate a circular linked structure.
 */

#include "CharStructure.hpp"

int main()
{
    JoaquinsUtilities utility;
    
    CharStructure cs1;
    
    int choice = 0;
    
    cout << "This is a program that implements a circular linked structure" << endl;
    
    cout << endl;
    
    string prompt1 = "1. Enter a string or char value\n2. Display the first item (Caution, it will be removed)\n3. Display all of the items(Caution, they will be removed)\n4. Quit the program\n\nWhich option do you choose: ";

    string s;
    char c;
    
    while(choice != 4)
    {
        cout << endl; 
        
        while(utility.getUtilitiesFlag() == false)
        {
            if(utility.isANumber(choice, prompt1) == false)
            {
                cout << "ERROR: You did not enter a number.  ";
                cout << endl;
                cout << endl;
            }
            else if(utility.isIntInRangeEqual(choice, 1, 4) == false)
            {
                cout << "ERROR: You entered a number less than 1 and greater than 4. ";
                cout << endl;
                cout << endl;
            }
        }
        
        utility.clearUtilitiesFlag();
        
        if(choice == 1)
        {
            cout << "Please enter the characters you wish to add to the structure: ";
            cin >> s;
            
            for(int i = 0; i < s.length(); i++)
            {
                cs1.push(s.at(i));
            }
        }
        if(choice == 2)
        {
            if(cs1.isEmpty() == false)
            {
                s = cs1.pop();
                
                cout << "The char at the beginning of the structure is: " << s << endl;
            }
            else
            {
                cout << "The list is empty" << endl;
            }
            
        }
        if(choice == 3)
        {
            while(cs1.isEmpty() == false)
            {
                s = cs1.pop();
                
                cout << "The structure has the following chars: " << s << endl;
            }
            
        }
        if(choice == 4)
        {
            cout << endl;
            cout << "Thank you for running the program the program, below are the values that remained in the strucutre." << endl;
            cout << endl;
            
            while(cs1.isEmpty() == false)
            {
                s = cs1.pop();
                
                cout << "The structure has the following chars: " << s << endl;
            }
        }
        
        utility.clearTheBuffer();
    }
    
    return 0;
}
