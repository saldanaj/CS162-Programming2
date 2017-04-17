/*
 Author: Joaquin Saldana 
 Date: 07/17/16
 Description: this is the abstract class and .hpp file to the file filter classes.  This file declares
 the prototype functions and the necessary parameter's to complete the necessary conversions.
 
 This
 
 */


#ifndef TRANSFORMER_HPP
#define TRANSFORMER_HPP

#include "JoaquinsUtilities.hpp"


class Transformer
{
    
    public:
    
    Transformer();
    
    virtual void doFilter(ifstream &in, ofstream &out) = 0;
    
    virtual char transform(char ch) = 0;
    
    
};

#endif /* Transformer_h */
