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

#ifndef LIST_HPP
#define LIST_HPP

#include "Items.hpp"

const int LISTSIZE = 4; 

class List
{
    private:
    
        Items *groceryList;
    
        int numberOfItemsInList;
    
        int groceryListSize;
    
        double totalCostOfList;
    
    public:
    
        /****************
        CLASS CONSTRUCTORS
        ****************/
    
        List();
    
        ~List();
    
        /****************
        ACCESSOR METHODS
        ****************/
    
        int itemsInList();
    
        int listSize();
    
        double totalCost();
    
        /****************
         SET METHODS
         ****************/
    
        void setNumberOfItemsInList(int newNumbersOfItemsInList);
    
        void setListSize(int newListSize);
    
        void setTotalCost(double newCost);
    
    
        /****************
         CLASS FUNCTIONS
         ****************/
    
        void addItems(Items itemToAdd);
    
        void removeItems(std::string itemToRemove);
    
        bool isListEmpty();
    
        bool isItemInList(std::string itemName); 
    
        void printGroceryList();
    
        double totalListCost();
    
    
};


#endif /* List_h */
