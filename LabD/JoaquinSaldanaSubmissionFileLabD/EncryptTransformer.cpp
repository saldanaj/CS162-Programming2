/*
 * Author: Joaquin Saldana
 * Date: 07/17/16
 *
 * Description: this is the implementation file for the encryption file filter class.  This class encrypts 
 * the input file.
 *
 */

#include "EncryptTransformer.hpp"


// CLASS CONSTRUCTOR


EncryptTransformer::EncryptTransformer(int num)
{
    key = num;
}

// CLASS FUNCTIONS

/*
 *
 * Function: doFilter
 * Parameters: ifstream object and ofstream object
 *
 * Description: this function will read the contents of a file and will encrypt the text in the file to a 
 * a new file.  
 *
 */

void EncryptTransformer::doFilter(ifstream &in, ofstream &out)
{
    char charToOutput;
    
    while(in)
    {
        charToOutput = this->transform(in.get());
        
        out << charToOutput;
        cout << charToOutput;
    }
    
    cout << endl;
    
}


/*
 * Function: transform
 * Parameters: char
 *
 * Description: this function will convert the character to an encrypted character
 *
 */


char EncryptTransformer::transform(char ch)
{
    char temp;
    
    int charNum = ch;
    
    temp = charNum + key;
    
    return temp;
}