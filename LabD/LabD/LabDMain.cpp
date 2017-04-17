/*
 Author: Joaquin Saldana 
 Date: 07/17/16
 
 Description: this is the main function for the Lab D program.
 
 */

#include "Transformer.hpp" 
#include "CopyTransformer.hpp"
#include "ToUpperCaseTransformer.hpp"
#include "EncryptTransformer.hpp"
#include "CipherTextTransformer.hpp"

int main()
{
    // PROGRAM GREETING
    
    cout << "This program will convert a file into multiple different files\n";
    cout << endl;
    cout << "First it will create for you a copy of the input file\n";
    cout << endl;
    cout << "Second, it will provide you a copy of the input file but encrypted\n";
    cout << endl;
    cout << "Third, it will tranform the entire input file to UPPERCASE\n";
    cout << endl;
    cout << "Lastly, it will modify the input file to all uppercase and 5 letter groups" << endl;
    cout << "==========================================================================" << endl;
    
    // OBJECT DELCARATIONS
    
    ifstream inputFile;
    ofstream outputFile;
    
    string inputfileName;
    string outputfileName;
    
    string exceptionError = "EXCEPTION: incorrect file name";
    
    srand(time(0));
    
    // EXCEPTION HANDLING IN THE EVENT THE USER ENTER'S A FILE THAT DOES NOT EXIST
    
    try
    {
        cout << "What's the name of the file you wish to use for input in this program? ";
        cin >> inputfileName;
        cout << endl;
        
        inputFile.open(inputfileName.c_str());
        
        if(!inputFile)
        {
            throw exceptionError;
        }
        
    }
    catch(string exceptionString)
    {
        while(!inputFile)
        {
            cout << "The file name you provided to open was incorrect.  Please provide another title: ";
            cin >> inputfileName;
            
            inputFile.open(inputfileName.c_str());
            
        }
    }
    
    // ==============================================================================
    
    // CREATION OF THE OUTPUT FILE
    
    cout << "What's the name of the file you wish to create for output of the copy filter example? ";
    cin >> outputfileName;
    
    outputFile.open(outputfileName.c_str(), std::ios::out | std::ios::app);

    cout << endl;
    cout << "OUTPUT OF COPY FILTER TRANSFORMER EXAMPLE" << endl;
    cout << "=========================================" << endl;
    
    // CREATION OF THE COPY FILE FILTER CLASS (COPYTRANSFORMER.HPP/.CPP)
    
    CopyTransformer copyTransfOne;
    
    copyTransfOne.doFilter(inputFile, outputFile);
    
    outputFile << endl;
    outputFile.close();
    inputFile.close();
    
    //===============================================================================
     
    // CREATION OF THE FILE FILTER THAT CONVERTS ALL CHARACTERS TO UPPER CASE
    
    string outputfileName2;
    
    cout << endl;
    cout << "What's the name of the file you wish to create for output of the uppercase filter example? ";
    cin >> outputfileName2;
    
    inputFile.open(inputfileName.c_str());
    outputFile.open(outputfileName2.c_str(), std::ios::out | std::ios::app);
    
    cout << endl;
    cout << "OUTPUT OF UPPER CASE FILE FILTER TRANSFORMER" << endl;
    cout << "============================================" << endl;
    
    ToUpperCaseTransformer uppercaseTransformer;
    
    uppercaseTransformer.doFilter(inputFile, outputFile);
    
    outputFile << endl;
    
    inputFile.close();
    outputFile.close();
    
    //===============================================================================
    
    // CREATION OF THE FILE FILTER THAT ENCRYPTS THE FILE
    
    string outputfileName3;
    int keyGenerator = 0;
    
    cout << endl;
    cout << "What's the name of the file you wish to create for output of the encryption filter example? ";
    cin >> outputfileName3;
    
    JoaquinsUtilities utility;
    
    string prompt1 = "What do you wish to be the encryption key? Must pick a number between 50 and 150: ";
    
    // INPUT VALIDATION FOR THE ENCRYPTION KEY
    
    while(utility.getUtilitiesFlag() == false)
    {
        if(utility.isANumber(keyGenerator, prompt1) == false)
        {
            cout << "You did not enter a number.  ";
        }
        else if(utility.isIntInRangeEqual(keyGenerator, 50, 150) == false)
        {
            cout << "You entered a number less than 50 and greater than 150. ";
        }
    }
    
    utility.clearUtilitiesFlag();
    
    inputFile.open(inputfileName.c_str());
    outputFile.open(outputfileName3.c_str(), std::ios::out | std::ios::app);
    
    cout << endl;
    cout << "OUTPUT OF ENCRYPTION CASE FILE FILTER TRANSFORMER" << endl;
    cout << "=================================================" << endl;
    
    EncryptTransformer encryptOne(keyGenerator);
    
    encryptOne.doFilter(inputFile, outputFile);
    
    inputFile.close();
    outputFile.close();
    
    //===============================================================================

    
    // CREATION OF THE FILE FILTER THAT CIPHERS THE TEXT
    
    string outputfileName4;
    
    cout << endl;
    cout << "What's the name of the file you wish to create for output of the cipher text filter example? ";
    cin >> outputfileName4;
    
    inputFile.open(inputfileName.c_str());
    outputFile.open(outputfileName4.c_str(), std::ios::out | std::ios::app);
    
    cout << endl;
    cout << "OUTPUT OF CIPHER TEXT FILE FILTER TRANSFORMER" << endl;
    cout << "=============================================" << endl;
    
    CipherTextTransformer cipherText;
    
    cipherText.doFilter(inputFile, outputFile);
    
    outputFile << endl;
    
    inputFile.close();
    outputFile.close();
    
    cout << endl;
    
    cout << "The program has finished.  Check the files to see the outcomes.  Thanks!!" << endl;
    
    return 0;
}

























