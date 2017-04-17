/*
 * Author: Joaquin Saldana
 * Date: 07/17/16
 *
 * Description: this is the implementation file for the To upper case transformer class which is a derived 
 * class from the transfomer class.  In this class, it receives an input file and generates a copy with 
 * all the strings in upper case letters.
 *
 */

#include "ToUpperCaseTransformer.hpp" 

// CONSTRUCTOR

ToUpperCaseTransformer::ToUpperCaseTransformer()
{
    
}

//CLASS FUNCTIONS

/*
 *
 * Function: doFilter
 * Parameters: ifstream object and ofstream object
 *
 * Description: this function will read the contents of a file and convert all strings and characters to 
 * upper case.
 *
 */

void ToUpperCaseTransformer::doFilter(ifstream &in, ofstream &out)
{
    char charToOutput;
    
    while(in)
    {
        charToOutput = this->transform(in.get());
        
        if(charToOutput == '\n')
        {
            out << endl;
            cout << endl;
        }
        else
        {
            out << charToOutput;
            cout << charToOutput;
        }
    }
    
    cout << endl;
}


/*
 * Function: transform
 * Parameters: char
 *
 * Description: this function will convert the character to it's upper case counterpart and return it.  
 * function will be called in the doFilter function
 *
 */


char ToUpperCaseTransformer::transform(char ch)
{
    char temp;
    
    temp = toupper(ch);
    
    return temp;
}





