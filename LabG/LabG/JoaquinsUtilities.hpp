/*
 Author: Joaquin Saldana 
 
 Description: This is my own personal utilities class.  In this class, I've included functions that will, but not limited to, validating the user is entering a number within a certain range, entering a number and not a character and more.
 
 The purpose of this class is so i dont have to continue copying and pasting code in each program I create. This will be expanded as the class progresses.
 
  Everytime a function is called from this class the flag will need to be "cleared", in other words, the user will need to ensure that after any function call the user will need to call the cleaUtilitiesFlag function.
 
 This class also calls the more common C++ libraries which include the string, iomanip, iostream, and fstream.  More will be added as the class progresses which includes the algorithms and cmath libraries.
 
 Also notifies the compiler we are using the standards of cin, cout, and endl.  These declarations can be found in the .cpp/implementation file.
 
 This is the header file. 
 */

#ifndef JOAQUINSUTILITIES_HPP
#define JOAQUINSUTILITIES_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using std::string; 
using std::cin;
using std::cout;
using std::endl;
using std::rand;
using std::srand;
using std::left;
using std::right;
using std::setw;
using std::showpoint;
using std::setprecision; 
using std::ifstream;
using std::ofstream;

class JoaquinsUtilities
{
    private:
    
        bool utilitiesFlag;
    
    public:
    
        JoaquinsUtilities();
    
        // ACCESSOR/GET FUNCTION(S)
    
        bool getUtilitiesFlag();
    
        // MUTATOR/SET FUNCTION(S)
    
        void clearUtilitiesFlag();

        // CLASS FUNCTIONS
    
        // Function Description: this function validates the user entered a number
    
        bool isANumber(int &numberToVerify, string prompt);
    
        bool isIntInRange(int numberToVerify, int low, int high);
    
        bool isIntInRangeEqual(int numberToVerify, int low, int high);
    
        void clearTheBuffer();
};


#endif /* JoaquinsUtilities_h */
