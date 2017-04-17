/*
 * Author: Joaquin Saldana
 * Date: 07/17/16
 *
 * Description: this is the header file for the encryption file filter class.  This class encrypts the 
 * input file.
 *
 */

#ifndef ENCRYPTTRANSFORMER_HPP
#define ENCRYPTTRANSFORMER_HPP

#include "Transformer.hpp"

class EncryptTransformer:public Transformer
{
    private:
    
    int key;
    
    public:
    
    EncryptTransformer(int);
    
    virtual void doFilter(ifstream &in, ofstream &out);
    
    virtual char transform(char ch);
    
};

#endif /* EncryptTransformer_h */
