/*
 Author: Joaquin Saldana 
 
 Description: the main function for Lab C.  In this .cpp file, we incorporate the recursive functions 
 and the input and output stream functions.  The user will be prompted to enter the file to read, the 
 if the input is incorrect an exception will be "thrown", and once input is correct, the user 
 recursive functions will output to console and to an output file.
 
 */


#include "LabCRecursiveFunctions.hpp"


int main ()
{
    
    /**************************************
     CONSTRUCTOR AND VARIABLE DECLARATIONS
     **************************************/
    
    LabCRecursiveFunctions recursiveOne;
    
    ifstream inputFile;
    
    ofstream outputFile;
    
    string readInput;
    
    string writeOutput;
    
    string fileToOpen;
    
    /***************************************
     USER INPUT FOR READ FILE AND OUTPUT FILE
     ***************************************/
    
    try
    {
        
        cout << "What's the name of the input file you wish to write to console? " ;
     
        getline(cin, fileToOpen);
        
        inputFile.open(fileToOpen);
        
        if(!inputFile)
        {
            throw string("ERROR: file not found");
        }
        else
        {
            while(getline(inputFile, readInput, ' '))
            {
                cout << readInput << " ";
                
                getline(inputFile, readInput);
                
                cout << readInput;
            }
        }
        
    }
    catch (string exceptionString)
    {
        cout << "Error opening the file" << endl;
        
        cout << endl;
        //cout << "Error opening the file" << endl;
        
        while(!inputFile)
        {
            cout << "What's the name of the input file you wish to write to console? " ;
            
            getline(cin, fileToOpen);
            
            inputFile.open(fileToOpen);
        }
        
    }
    
    
    
    
    
    /*
    cout << "What's the name of the file you wish to store the reversed string to? ";
    //cin >> writeOutput;
    
    getline(cin, writeOutput);
    
    outputFile.open(writeOutput);

     */
    
    
    /*
    char testArray[] = "This is a test";
    
    recursiveOne.reverseCharArray(testArray);
    
    cout << endl;
    */
    
    
    inputFile.close();
    
    //outputFile.close();
    
    return 0;
}





