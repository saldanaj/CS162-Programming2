/*
 * Author: Joaquin Saldana
 * Date: 07/17/16
 *
 * Description: this is the header file for the To upper case transformer class which is a derived class
 * from the transfomer class.  In this class, it receives an input file and generates a copy with all the
 * strings in upper case letters.
 *
 */

#ifndef TOUPPERCASETRANSFORMER_HPP
#define TOUPPERCASETRANSFORMER_HPP

#include "Transformer.hpp"

class ToUpperCaseTransformer:public Transformer
{
    public:
    
    ToUpperCaseTransformer();
    
    virtual void doFilter(ifstream &in, ofstream &out);
    
    virtual char transform(char ch);
    
};


#endif /* ToUpperCaseTransformer_h */
