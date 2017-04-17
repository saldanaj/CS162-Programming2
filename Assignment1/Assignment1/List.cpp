/*
 Author: Joaquin Saldana
 Date: 06/26/16
 Description: This is the header file for the List class.  This class is the abstraction of a grocery list which carries objects from the "Items" class.  The class has three member variables
 1. Dynamic array initialized to a size of 4 which carries objects of the "Items" class
 2. Counter for the number of objects in the class
 3. Counter/int for the size of the actual size of the array
 
 In addition, the class has it's own unique functions which are
 1. addItems
 2. removeItems
 3. printList
 
 There are also helper functions to assist other functions in the course of the work.
 */

#include "List.hpp" 
#include <iostream>
#include <iomanip>

using namespace std;

/*******************
 CLASS CONSTRUCTORS
 ******************/

List::List()
{
    groceryList = new Items[LISTSIZE];
    
    numberOfItemsInList = 0;
    
    groceryListSize = LISTSIZE;
    
    totalCostOfList = 0;
}

/*******************
 CLASS DESTRUCTOR
 ******************/

List::~List()
{
    delete[] groceryList;
    
    groceryList = NULL;
}


/****************
 ACCESSOR METHODS
 ****************/

int List::itemsInList()
{
    return numberOfItemsInList;
}

int List::listSize()
{
    return groceryListSize;
}

double List::totalCost()
{
    return totalCostOfList;
}

/****************
 SET METHODS
 ****************/

void List::setNumberOfItemsInList(int newNumbersOfItemsInList)
{
    numberOfItemsInList = newNumbersOfItemsInList;
}

void List::setListSize(int newListSize)
{
    groceryListSize = newListSize;
}

void List::setTotalCost(double newCost)
{
    totalCostOfList = newCost;
}

/****************
 CLASS FUNCTIONS
 ****************/


/****************************************
 Function: isListEmpty() 
 Description: Checks to see if the total number of items in the list is 0.  If so, then it returns true.  Else it returns false.
****************************************/

bool List::isListEmpty()
{
    return numberOfItemsInList == 0;
}


/****************************************
 Function: isItemInList(string paramater)
 Description: function checks to see if an item already exists in the list.  If so, it returns true, else returns false.  Function requires one parameter which is the name of the item.  Function assumes the user is 
 enter the correct spelling of the item.
 ****************************************/

bool List::isItemInList(string itemName)
{
    bool isInList = false;
    
    for(int i = 0; i < numberOfItemsInList; i++)
    {
        if(groceryList[i].getItemName() == itemName)
        {
            isInList = true;
        }
    }
        
    return isInList;
}


/****************************************
 Function: addItems(Items itemToAdd)
 Description: Accepts one parameter, which is the item to add to the list.  Checks to make sure list is not full, if it is, then it doubles the list in size.  Ex: if list size is 8, then it grows to 16.
 ****************************************/

void List::addItems(Items itemToAdd)
{
    // check to see if the list is full, if so, then the list will be double in size
    
    if(isItemInList(itemToAdd.getItemName()))
    {
        cout << "The item is already in the list." << endl;
    }
    else if(numberOfItemsInList >= groceryListSize)
    {
        Items * temp = new Items[groceryListSize * 2];
        
        for(int i = 0; i < numberOfItemsInList ; i++)
        {
            temp[i] = groceryList[i];
        }
        
        groceryListSize = groceryListSize * 2;
        
        delete[] groceryList;
        
        groceryList = temp;
        
        numberOfItemsInList++;
        
        groceryList[numberOfItemsInList - 1] = itemToAdd;
    }
    else
    {
        numberOfItemsInList++;
        
        groceryList[numberOfItemsInList - 1] = itemToAdd;
    }
    
}

/****************************************
 Function: removeItems(int)
 Description: Accepts one parameter, which is the number of the item to remove from the list.  Once an item is removed, the remaining items, if any, after the item removed are "shifted down" to ensure 
 there is no attempt to access an non-existent object
 ****************************************/

void List::removeItems(string itemToRemove)
{
    if(isListEmpty())
    {
        cout << "Nothing was removed because the list is empty." << endl;
    }
    else if (isItemInList(itemToRemove))
    {
        Items * temp = new Items[groceryListSize];
        
        if(numberOfItemsInList == 1)
        {
            
            delete[] groceryList;
            
            groceryList = temp;
            
            numberOfItemsInList--;
            
        } // END OF IF STATEMENT
        else
        {
            int i = 0;
            
            bool itemFound = false;
            
            while(itemFound == false)
            {
                if(i >= numberOfItemsInList - 1)
                {
                    delete[] groceryList;
                    
                    groceryList = temp;
                    
                    itemFound = true;
                }
                else if(groceryList[i].getItemName() == itemToRemove && i < numberOfItemsInList - 1)
                {
                    for(int j = i + 1; j < numberOfItemsInList ; j++)
                    {
                        temp[i] = groceryList[j];
                        i++;
                    }
                    
                    delete[] groceryList;
                    
                    groceryList = temp;
                    
                    itemFound = true;
                    
                }
                else
                {
                    temp[i] = groceryList[i];
                }
                
                i++;
                
            } // END OF WHILE LOOP
            
            numberOfItemsInList--;
            
        } // END OF ELSE STATEMENT
        
        temp = NULL;
        
        cout << endl;
        cout << "We successfully removed the item from the list." << endl;
        
    } // END OF IF-ELSE STMT
    else
    {
        cout << "The item your requesting to remove is not in the list.  Please make sure you typed it in correctly." << endl;
        
    } // END OF ELSE STMT
    
}

/****************************************
 Function: printGroceryList()
 Description: prints the entire grocery list including the cost of the list
 ****************************************/

void List::printGroceryList()
{
    if(isListEmpty())
    {
        cout << "The list is empty" << endl;
    }
    else
    {
        cout << "Item Name            Unit      No. Units   Price" << endl;
        cout << "------------------   -------   ---------   -----" << endl;
        
        for(int i = 0; i < numberOfItemsInList; i++)
        {
            cout << left << setw(21) << groceryList[i].getItemName();
            cout << left << setw(10) << groceryList[i].getUnitType();
            cout << setw(12) << groceryList[i].getNumberOfItems();
            cout << "$"<< left << fixed << showpoint << setprecision(2) << groceryList[i].getItemPrice();
            cout << endl;
        }
        
        cout << "------------------------------------------------" << endl;
        
        cout << "Total Cost of the Grocery List: $" << totalListCost() << endl;
    }
}

/****************************************
 Function: totalListCost()
 Description: traverses the list to find the individual total cost of each "Item" and sums the total for the user.
 ****************************************/

double List::totalListCost()
{
    totalCostOfList = 0;  // has to be reset in case items were removed or added to the list
    
    for(int i = 0; i < numberOfItemsInList; i++)
    {
        totalCostOfList += groceryList[i].totalCost();
    }
    
    return totalCostOfList;
}































