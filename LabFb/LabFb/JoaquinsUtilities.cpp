/*
 Author: Joaquin Saldana
 Description: This is my own personal utilities class.  In this class, I've included functions that will validate the user is entering a number within a certain range, entering a number and not a character and more.
 
 The purpose of this class is so i dont have to continue copying and pasting code in each program I create. This will be expanded as the class progresses.

 Everytime a function is called from this class the flag will need to be "cleared", in other words, the user will need to ensure that after any function call the user will need to call the cleaUtilitiesFlag function.  
 
 This is the implementation file. 
 */


#include "JoaquinsUtilities.hpp"

/************************
 CONSTRUCTORS
 ************************/

// DEFAULT CONSTRUCTOR

JoaquinsUtilities::JoaquinsUtilities()
{
    utilitiesFlag = false;
}

/************************
 ACCESSOR/GET FUNCTIONS
 ************************/

bool JoaquinsUtilities::getUtilitiesFlag()
{
    return utilitiesFlag;
}

/************************
 GET FUNCTION
 ************************/

void JoaquinsUtilities::clearUtilitiesFlag()
{
    utilitiesFlag = false;
}

/************************
 CLASS FUNCTION(S)
 ************************/

/************************************************************************************************************
 Function: isANumber
 Parameters: int numberToVerify 
 Description: this function verifies the variable entered is indeed a number and not a string or char.  If the user did not enter a number then it returns false.
************************************************************************************************************/

bool JoaquinsUtilities::isANumber(int &numberToVerify, string prompt)
{
    cout << prompt;
    //cin >> numberToVerify;
    
    if(!(cin >> numberToVerify))
    {
        cin.clear();
        this->clearTheBuffer();
        
        utilitiesFlag = false;
        
        return utilitiesFlag;
    }
    else
    {
        utilitiesFlag = true;
        
        return utilitiesFlag;
    }
}

/************************************************************************************************************
 Function: isIntInRange
 Parameters: int numberToVerify, int low, int high
 Description: this function verifies the variable entered is indeed a number within the range of numbers entered by the program as the range.  If the number of out of range then it returns false.  It only checks that it's less than the number's entered in the parameter.  (DOES NOT CHECK IF THE NUMBER IF >= OR <=).
 ************************************************************************************************************/

bool JoaquinsUtilities::isIntInRange(int numberToVerify, int low, int high)
{
    if(numberToVerify < low || numberToVerify > high)
    {
        utilitiesFlag = false;
        
        return utilitiesFlag;
    }
    else
    {
        utilitiesFlag = true;
        
        return utilitiesFlag;
    }
}

/************************************************************************************************************
 Function: isIntInRangeEquals
 Parameters: int numberToVerify, int low, int high
 Description: this function verifies the variable entered is indeed a number within the range of numbers entered by the program as the range.  If the number of out of range then it returns false.  It checks that the number is LESS THAN OR EQUAL TO and GREATER THAN OR EQUAL TO (<= or >=).
 ************************************************************************************************************/

bool JoaquinsUtilities::isIntInRangeEqual(int numberToVerify, int low, int high)
{
    if(numberToVerify >= low && numberToVerify <= high)
    {
        utilitiesFlag = true;
        
        return utilitiesFlag;
    }
    else
    {
        utilitiesFlag = false;
        
        return utilitiesFlag;
    }
    
}

/************************************************************************************************************
 Function: clearTheBuffer
 Parameters: none
 Description: clears the cin buffer in case there's still char's in the buffer that need to be discarded or ignored
 ************************************************************************************************************/

void JoaquinsUtilities::clearTheBuffer()
{
    cin.ignore(100, '\n');

}



