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
    
    string s;
    
    char c;
    
    cs1.push('a');
    
    cs1.push('b');

    cs1.push('c');

    cs1.push('d');

    if(cs1.getHeadPointer() == NULL)
    {
        cout << "HeadPointer is pointing to NULL" << endl;
    }
    if(cs1.getBackPointer() == NULL)
    {
        cout << "BackPointer is pointing to NULL" << endl;
    }
    if(cs1.getBackPointer() != NULL && cs1.getHeadPointer() != NULL)
    {
        CharNode * temp1 = cs1.getHeadPointer();
        
        cout << "HeadPointer is pointing to: " << temp1->getLetter() << endl;
        
        CharNode * temp2 = cs1.getBackPointer();
        
        cout << "Backpointer is pointing to: " << temp2->getLetter() << endl;
    }
    
    cout << "Now starting the 2nd section of the program " << endl;
    cout << endl;
    
    while(cs1.isEmpty() == false)
    {
        c = cs1.pop();
        
        if(c == NULL)
        {
            cout << "C equals NULL" << endl;
        }
        else
        {
            cout << "C equals: " << c << endl;
        }
        
        cout << "2nd part of boolean functions: " << endl; 
        
        if(cs1.getHeadPointer() == NULL)
        {
            cout << "HeadPointer is pointing to NULL" << endl;
        }
        if(cs1.getBackPointer() == NULL)
        {
            cout << "BackPointer is pointing to NULL" << endl;
        }
        if(cs1.getBackPointer() != NULL && cs1.getHeadPointer() != NULL)
        {
            CharNode * temp1 = cs1.getHeadPointer();
            
            cout << "HeadPointer is pointing to: " << temp1->getLetter() << endl;
            
            CharNode * temp2 = cs1.getBackPointer();
            
            cout << "Backpointer is pointing to: " << temp2->getLetter() << endl;
        }
    }
    
    /*
    cout << "This is a program that implements a circular linked structure" << endl;
    
    cout << endl;
    
    string prompt1 = "1. Enter a string or char value\n2. Display the first item (Caution, it will be removed)\n3. Display all of the items(Caution, they will be removed)\n4. Quit the program\n\nWhich option do you choose: ";
    
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
    
    */
     
    return 0;
}
