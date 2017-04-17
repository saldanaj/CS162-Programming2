/*
 * Author: Joaquin Saldana
 * Date: 07/17/16
 *
 * Description: this is the header file for the cipher text transformer file filter.  This filter will 
 * change the text in a file to cipher in 5 letter groups with no regard to the new line character.
 *
 */

#ifndef CIPHERTEXTTRANSFORMER_HPP
#define CIPHERTEXTTRANSFORMER_HPP

#include "Transformer.hpp" 

class CipherTextTransformer:public Transformer
{
    
    public:
    
    CipherTextTransformer();
    
    virtual void doFilter(ifstream &in, ofstream &out);
    
    virtual char transform(char ch);
    
};

#endif /* CipherTextTransformer_h */
