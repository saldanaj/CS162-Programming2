/*
 Author: Joaquin Saldana 
 Date: 08/04/16
 Description: This is the header file to the Gadget container in which the character, Batman, will carry with him.  The container implements a linear linked list with a maximum hold 
 capacity of three items.  Batman will collect these Gadgets has he move through the game environment.
 */

#ifndef GADGETCONTAINER_HPP
#define GADGETCONTAINER_HPP

#include "JoaquinsUtilities.hpp"

class GadgetContainer
{
    protected:
    
        struct GadgetNode
        {
            string gadgetName;
            
            GadgetNode * next;
            
            GadgetNode(string gadget, GadgetNode * nextNode = NULL)
            {
                gadgetName = gadget;
                next = nextNode;
            }
        };
    
        GadgetNode * head;
    
    public:
    
        // CONSTRUCTOR
    
        GadgetContainer();
    
        // DESTRUCTOR - since the list is a dynamic list using dynamic nodes
    
        ~GadgetContainer();
    
        // CLASS FUNCTIONS - which include adding to the list, checking if the list is empty, and more
    
        void addGadget(string g);
    
        bool isListEmpty();
    
        bool isGadgetInContainer(string g);
    
        void printGadgetList();
    
        // string removeGadget(string g);
    
};

#endif /* GadgetContainer_h */
