/*
 Author: Joaquin Saldana
 Date: 08/04/16
 Description: This is the implementation file to the Gadget container in which the character, Batman, will carry with him.  The container implements a linear linked list and 
 Batman will collect these Gadgets has he progresses through the game environment.  Some will become vital in order for him to continue through the environment.
 
 The class does not implement a "remove gadget" seeing as how when Batman collects a gadget there is not logical reason why he will remove it from his utility belt.  However 
 in order to avoid memory leaks, I've made the concious decision to override the constructor ensuring the items are removed from the heap/dynamic allocation.  
 */

#include "GadgetContainer.hpp"

// CONSTRUCTOR

GadgetContainer::GadgetContainer()
{
    head = NULL;
}

// DESTRUCTOR

GadgetContainer::~GadgetContainer()
{
    if(isListEmpty() == false)
    {
        GadgetNode * iterator = head;
        
        while(head != NULL)
        {
            head = iterator->next;
            
            delete iterator;
            
            iterator = head;
        }
    }
}

// CLASS FUNCTIONS

/*
 Function: addGagdet()
 Parameter: string
 Return: N/A
 Description: functions adds a node at the end of the list with the gadget name.
*/

void GadgetContainer::addGadget(string g)
{
    if(isListEmpty())
    {
        head = new GadgetNode(g);
    }
    else
    {
        GadgetNode * temp = new GadgetNode(g);
        
        GadgetNode * iterator = head;
        
        while(iterator->next != NULL)
        {
            iterator = iterator->next;
        }
        iterator->next = temp;
    }
}

/*
 Function: isListEmpty()
 Parameter: N/A
 Return: boolean
 Description: checks to see if the list is empty and if so, it returns true.  Else it returns false.
 */

bool GadgetContainer::isListEmpty()
{
    if(head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*
 Function: isGadgetInContainer()
 Parameter: string
 Return: boolean
 Description: checks to see if the string/gadget is in the container
 */

bool GadgetContainer::isGadgetInContainer(string g)
{
    if(isListEmpty())
    {
        return false;
    }
    else
    {
        GadgetNode * temp = head;
        
        bool match = false;
        
        while(temp != NULL && match != true)
        {
            if(g == temp->gadgetName)
            {
                match = true;
            }
            else
            {
                temp = temp->next;
            }
        }
        
        if(match == true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

/*
 Function: printGadgetList()
 Parameter: N/A
 Return: N/A
 Description: print's the gadget list in order
 */

void GadgetContainer::printGadgetList()
{
    if(isListEmpty())
    {
        cout << endl;
        cout << "Batman's utility belt is empty" << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "Below is the gadget's Batman is currently holding in his utility belt: " << endl;
        
        string gadget;
        int i = 1;
        
        GadgetNode * temp = head;
        
        while(temp != NULL)
        {
            gadget = temp->gadgetName;
            cout << i << ". " << gadget << endl;
            i++;
            temp = temp->next;
        }
        
        cout << endl;
    }
}















