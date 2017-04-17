/*
 Author: Joaquin Saldana
 Date: 06/26/16
 Description: Main function for assignment one.  We will implement the Items class and the List class together in this file to form a Grocery List.
 */


#include "Items.hpp"
#include "List.hpp" 

#include <iostream>


using namespace std;

int main()
{
    
    List groceryListOne;
    
    int selection;
    
    // User will be prompted with a menu and asked to select an option.  Options are as follows:
    // 1. Add item to list
    // 2. Remove item from list
    // 3. Print the list
    // 4. Exit the program

    cout << "Welcome, this program allows you to create a grocery list.  Below are the options provided to you. \n1. Add item to list \n2. Remove Item from List \n3. Print the list \n4. Exit the program." << endl;

    
    // This do while loop will ask the user to enter a valid number.  If the user enters a different
    // data type it will inform the user they entered an incorrect value and will ask they try again.
    // If the user enters a number outside the range (1-4), then the user will be informed of the
    // invalid input and ask they enter another number.
    // If the user enters 4, then the program terminates.
    
    do
    {
        cout << endl;
        
        cout << "Which option do you elect?  Enter 1, 2, 3, or 4: " ;
        
        while(!(cin >> selection))
        {
            cout << "You did not enter a number.  Please enter a number: " ;
            cin.clear();
            cin.ignore(100, '\n');
        }
        
        cin.ignore(100, '\n');
        
        // If statements in which the user decides what actions he/she wants to perform w/ the program
        // 1st if statement is entered if the user selects to add item
        // 2nd if statement if the user decides to remove an item
        // 3rd if statement if the user decides to print the list
        // 4th if statement if the user decides to exit the program
        // 5th if statement if the user entered an invalid option
        
        if(selection == 1)
        {
            // variables needed to hold values entered by user
            // which will be used to create the Items to add to the
            // grocery list
            
            string name;
            string type;
            int howMany;
            double price;
            
            // Prompts where the user is asked to enter the data to create the "Item"
            // The cin buffer is cleared/ignored after input to avoid overlapped entries.
            // Also there is code which validates the user entered an int or double data type
            // where necessary.
            
            cout << "What is the name of the item you wish to add to the list: ";
            getline(cin, name);
            
            cout << "What is the unit type: ";
            cin >> type;
            
            cin.ignore(100, '\n');
            
            cout << "How many " << name << "'s do you wish to add to the list: ";
            while(!(cin >> howMany))
            {
                cout << "You did not enter a valid number.  How many " << name << "'s do you wish to add to the list: " ;
                cin.clear();
                cin.ignore(100, '\n');
            }
            
            cin.ignore(100, '\n');

            cout << "Finally what's its price: ";
            while(!(cin >> price))
            {
                cout << "You did not enter a valid price.  What is the item price: " ;
                cin.clear();
                cin.ignore(100, '\n');
            }
            
            cin.ignore(100, '\n');
            
            Items itemOne(name, type, howMany, price);
            
            groceryListOne.addItems(itemOne);
            
        } // end of 1st if statement to "add item"
        else if(selection == 2)
        {
            // user elected to remove an item from the list
            // as a result, the user is asked to enter the name of the item they wish to remove
            // it first checks to make sure the item is on the list, if not the user is notified
            // if it's in the list the item is removed unless the list is empty in which case the
            // user is also notified the list is empty
            
            string itemToRemove = "";
            cout << "Please type the name of the item you wish to remove from the list: ";
            getline(cin, itemToRemove);
            
            groceryListOne.removeItems(itemToRemove);
            
            
        } // end of 2nd if statement to "remove item"
        else if(selection == 3)
        {
            // user elected to print the grocery list
            // which also displays the lists total cost
            
            cout << endl;
            groceryListOne.printGroceryList();
            
        } // end of 3rd if statemenet to "print list"
        else if(selection == 4)
        {
            // user choose to exit the program
            
            cout << endl;
            
            cout << "Thank you running the program.  Below is the final version of your list.  Goodbye. " << endl;
            
            cout << endl;
            
            groceryListOne.printGroceryList();
            
        } // end of 4th if statement to terminate the program
        else
        {
            // input from user was invalid and is notified
            
            cout << "Your selection was invalid.  Please try again: " ;
            
        } // end of 5th if statement which informs the user their input was invalid
        
    }while(selection != 4);
    
    
    return 0;
    
} // END OF MAIN
