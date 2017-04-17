/*
 * Author: Joaquin Saldana 
 * Date: 07/17/16
 *
 * Description: this is the header file for the Copy Transformer class which is a derived class 
 * from the transfomer class.  In this class, it receives an input file and generates an exact copy
 * of the file.
 *
 */

#ifndef COPYTRANSFORMER_HPP
#define COPYTRANSFORMER_HPP

#include "Transformer.hpp"

class CopyTransformer:public Transformer
{
    

    public:
    
    CopyTransformer();
    
    virtual void doFilter(ifstream &in, ofstream &out);
    
    virtual char transform(char ch);
    
};

#endif /* CopyTransformer_h */
