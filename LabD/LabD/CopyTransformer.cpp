/*
 * Author: Joaquin Saldana
 * Date: 07/17/16
 *
 * Description: this is the implementation (.cpp) file for the Copy Transformer class which is a derived 
 * class from the transfomer class.  In this class, it receives an input file and generates an exact copy
 * of the file.
 *
 * The constructor does not initialize any parameters or "member" variables.
 */


#include "CopyTransformer.hpp" 


// CONSTRUCTOR

CopyTransformer::CopyTransformer()
{
    
}

// CLASS FUNCTIONS

/*
 *
 * Function: doFilter
 * Parameters: ifstream object and ofstream object
 *
 * Description: this function will copy the contents of a file, passed by the ifstream object, and provide
 * an exact copy of the file using the ofstream object.
 *
 */

void CopyTransformer::doFilter(ifstream &in, ofstream &out)
{
    char charToOutput;
    
    while(in)
    {
        charToOutput = this->transform(in.get());
        
        if(charToOutput == '\n')
        {
            cout << endl;
            out << endl;
        }
        else
        {
            cout << charToOutput;
            out << charToOutput;
        }
    }
    
    cout << endl;
    out << endl;
}


/*
 * Function: transform 
 * Parameters: char 
 * 
 * Description: this function of the copyTransformer class will return the same char passed as a parameter 
 * argument.  In other instances of the class, the function will perform different transformations.
 *
 */


char CopyTransformer::transform(char ch)
{
    return ch;
}