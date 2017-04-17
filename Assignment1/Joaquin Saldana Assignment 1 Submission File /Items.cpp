/*
 Author: Joaquin Saldana
 Date: 06/26/16
 Description: This is the .cpp file for the Items class.  It will contain four member variables (item name, item unit, number to buy, and unit price).
 It will contain the standard get and set methods.  The unique class function is the totalCost function which calculates the totalCost of the item x the number needed.
 */

#include "Items.hpp" 

using namespace std;


/*******************
 CLASS CONSTRUCTORS
 ******************/

// DEFAULT CONSTRUCTOR

Items::Items()
{
    itemName = "";
    
    unitType = "";
    
    totalItems = 0;
    
    unitPrice = 0;
}

//CONSTRUCTOR W/ PARAMETERS 

Items::Items(string name, string unit, int numberOfItems, double price)
{
    itemName = name;
    
    unitType = unit;
    
    totalItems = numberOfItems;
    
    unitPrice = price;
}


/****************
ACCESSOR METHODS
****************/


string Items::getItemName()
{
    return itemName;
}

string Items::getUnitType()
{
    return unitType;
}

int Items::getNumberOfItems()
{
    return totalItems;
}

double Items::getItemPrice()
{
    return unitPrice;
}


/****************
 SET METHODS
 ****************/


void Items::setItemName(string name)
{
    itemName = name;
}

void Items::setItemType(string type)
{
    unitType = type;
}

void Items::setTotalItems(int numberOfItems)
{
    totalItems = numberOfItems;
}

void Items::setPricePerItem(double price)
{
    unitPrice = price;
}


/****************
 CLASS FUNCTIONS
 ****************/

/* ***********************************************************************************************
 Function: totalCost() 
 Description: this function returns the total cost of the item.  It multiplies the item's price 
 times the numberOfItems.  The function returns a DOUBLE
 ************************************************************************************************/

double Items::totalCost()
{
    return unitPrice * (double)totalItems;
}












