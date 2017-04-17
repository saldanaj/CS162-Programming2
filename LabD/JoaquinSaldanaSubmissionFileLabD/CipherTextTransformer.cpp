/*
 * Author: Joaquin Saldana
 * Date: 07/17/16
 *
 * Description: this is the implementation file for the cipher text transformer file filter.  This filter 
 * will change the text in a file to cipher in 5 letter groups with no regard to the new line character.
 *
 */

#include "CipherTextTransformer.hpp" 

// CLASS CONSTRUCTOR

CipherTextTransformer::CipherTextTransformer()
{
    
}

// CLASS FUNCTIONS

/*
 *
 * Function: doFilter
 * Parameters: ifstream object and ofstream object
 *
 * Description: this function will read the contents of a file and cipher the text with no regard to the 
 * new line character 
 *
 */

void CipherTextTransformer::doFilter(ifstream &in, ofstream &out)
{
    char charToOutput;
    int i = 0;
    
    while(in)
    {
        if(i == 5)
        {
            i = 0;
            
            out << ' ';
            cout << ' ' ;
        }
        else
        {
            charToOutput = this->transform(in.get());
            
            out << charToOutput;
            cout << charToOutput;
            
            i++;
        }
        
    }
    
    cout << endl;
    
}

/*
 * Function: transform
 * Parameters: char
 *
 * Description: this function will convert the character to a ciphered text
 *
 */


char CipherTextTransformer::transform(char ch)
{
    char temp;
    int charNum = ch;
    int charToDisplay;
    
    if(charNum % 2 == 0)
    {
        charToDisplay = rand() % 13 + 65;
    }
    else
    {
        charToDisplay = rand() % 27 + 65;
    }
    
    temp = charToDisplay;
    
    return temp;
}




















