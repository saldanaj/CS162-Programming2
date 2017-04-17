/*
 Author: Joaquin Saldana 
 Date: 06/26/16
 Description: This is the header file for the Items class.  It will contain four member variables (item name, item unit, number to buy, and unit price).  
 It will contain the standard get and set methods.
 */

#ifndef ITEMS_HPP
#define ITEMS_HPP

#include <string>

class Items
{
    
    private:
    
        std::string itemName;
    
        std::string unitType;
    
        int totalItems;
    
        double unitPrice;
    
    public:
    
        Items(); 
    
        Items(std::string name, std::string unit, int numberOfItems, double unitPrice);
    
        // Accessor Functions
    
        std::string getItemName();
    
        std::string getUnitType();
    
        int getNumberOfItems();
    
        double getItemPrice();
    
        // Mutator Functions
    
        void setItemName(std::string name);
    
        void setItemType(std::string type);
    
        void setTotalItems(int numberOfItems);
    
        void setPricePerItem(double price);
    
        // Class functions
    
        double totalCost();
    
};

#endif /* items_h */
