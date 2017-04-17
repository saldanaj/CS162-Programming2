/*
 Author: Joaquin Saldana 
 Date: 08/08/2016
 Description: this is the main file for Lab G which requires we implement several forms of sort and search algorithsm.  The program will ask the user to enter the data file they wish to use for the 
 algorithms and the name of the file they wish to save the output results.  
 */

#include "JoaquinsUtilities.hpp"
#include "LinearSearch.hpp"
#include "BubbleSort.hpp"
#include "BinarySearch.hpp"


int main()
{
    srand(time(0));
    
    JoaquinsUtilities utility1;
    
    cout << "Welcome this program will implement several sort and search algorithms.  You will prompted with a menu in which you will be asked what functions you would like to use.  Thanks."  << endl;
    cout << endl;
    
    string prompt1 = "1. Search for an integer target value, LINEAR search (ex: 0)\n2. Sort a set of values\n3. Search for the integer target value, BINARY SEARCH (Caution: file must be sorted) \n4. Exit the program \nWhich do you wish to implement?: ";
    
    string exceptionError = "EXCEPTION: incorrect file name";
    
    int choice = 0;
    
    while(choice != 4)
    {
        while(utility1.getUtilitiesFlag() == false)
        {
            if(utility1.isANumber(choice, prompt1) == false)
            {
                cout << "ERROR: You did not enter a number.  ";
                cout << endl;
            }
            else if(utility1.isIntInRangeEqual(choice, 1, 4) == false)
            {
                cout << "ERROR: You entered a number less than 1 and greater than 4. ";
                cout << endl;
            }
        } // END OF WHILE LOOP WHICH CHECKS IS USER ENTERED AN INT OR CHAR/STRING OR NUMBER ENTERED IS OUT OF RANGE
        
        utility1.clearUtilitiesFlag(); // CLEAR THE UTILITIES FLAG TO ENSURE THE WHILE LOOP DOES NOT GO INTO INFINITY
        
        
        /*
         ===============================================================================================================
         */
        
        
        if(choice == 1)
        {
            cout << endl;
            cout << "You've choosen to perform a linear search.  Let's get started. " << endl;
            cout << endl;
            
            ifstream inputFile1;
            string inputFileName1;
            int numberToSearch;
            
            /*
             TRY/CATCH BLOCK TO DETECT IF THE USER IS ENTERING THE INCORRECT FILE NAME AND REQUESTING THE USER REENTER THE FILE NAME
             */
            
            try
            {
                cout << "What's the name of the file you wish to use for input in this program? ";
                cin >> inputFileName1;
                cout << endl;
                
                inputFile1.open(inputFileName1.c_str());
                
                if(!inputFile1)
                {
                    throw exceptionError;
                }
                
            }
            catch(string exceptionString)
            {
                while(!inputFile1)
                {
                    cout << "The file name you provided to open was incorrect.  Please provide another title: ";
                    cin >> inputFileName1;
                    
                    inputFile1.open(inputFileName1.c_str());
                    
                }
            }
            
            // REQUESTING THE USER TO ENTER THE TARGET VALUE
            
            cout << "What number do you wish to look for in the file? ";
            cin >> numberToSearch;
            
            // CREATING THE LINEAR SEARCH OBJECT AND PASSING THE IFSTREAM OBJECT AND THE TARGET VALUE
            
            LinearSearch l1;
            
            l1.numberPosition(inputFile1, numberToSearch);
            
            inputFile1.close();
        
            
        } // END OF IF STMT IF USER ENTERS THE OPTION 1
        else if(choice == 2)
        {
            cout << endl;
            cout << "You've choosen to sort a set of values.  Let's get started. " << endl;
            cout << endl;
            
            ifstream inputFile2;
            ofstream outputFile2;
            
            string inputFileName2;
            string outputFileName2;
            
            /*
             TRY/CATCH BLOCK TO DETECT IF THE USER IS ENTERING THE INCORRECT FILE NAME AND REQUESTING THE USER REENTER THE FILE NAME
             */
            
            try
            {
                cout << "What's the name of the file you wish to use for input in this program? ";
                cin >> inputFileName2;
                cout << endl;
                
                inputFile2.open(inputFileName2.c_str());
                
                if(!inputFile2)
                {
                    throw exceptionError;
                }
                
            }
            catch(string exceptionString)
            {
                while(!inputFile2)
                {
                    cout << "The file name you provided to open was incorrect.  Please provide another title: ";
                    cin >> inputFileName2;
                    
                    inputFile2.open(inputFileName2.c_str());
                    
                }
            }
            
            // REQUESTING USER TO ENTER THE FILE THEY WISH TO OUTPUT TO
            
            cout << "What's the name of the output file you wish to create? ";
            cin >> outputFileName2;
            
            outputFile2.open(outputFileName2.c_str());
            
            // REQUESTING THE USER TO CHOOSE BETWEEN SORTING IN ASCENDING ORDER OR IN DESCENDING ORDER
            
            string orderPrompt = "Please choose one of the following:\n1. Sort in Ascending Order\n2. Sort in Descending Order\nWhich do you choose: ";
            int sortChoice;
            
            while(utility1.getUtilitiesFlag() == false)
            {
                if(utility1.isANumber(sortChoice, orderPrompt) == false)
                {
                    cout << "ERROR: You did not enter a number.  ";
                    cout << endl;
                }
                else if(utility1.isIntInRangeEqual(sortChoice, 1, 2) == false)
                {
                    cout << "ERROR: You entered a number less than 1 and greater than 2. ";
                    cout << endl;
                }
            } // END OF WHILE LOOP WHICH CHECKS IS USER ENTERED AN INT OR CHAR/STRING OR NUMBER ENTERED IS OUT OF RANGE
            
            utility1.clearUtilitiesFlag(); // CLEAR THE UTILITIES FLAG TO ENSURE THE WHILE LOOP DOES NOT GO INTO INFINITY
            
            BubbleSort b1;
            
            if(sortChoice == 1)
            {
                // USER CHOOSE TO SORT IN ASCENDING ORDER
                cout << endl;
                cout << "You've choosen to sort your file in ASCENDING order" << endl;
                cout << endl;
                
                b1.ascendingOrder(inputFile2, outputFile2);
                
                cout << endl;
                cout << "The file has been sorted" << endl;
                cout << endl;
            }
            else
            {
                // USER CHOOSE TO SORT IN DESCENDING ORDER
                
                cout << endl;
                cout << "You've choosen to sort your file in DESCENDING order" << endl;
                cout << endl;
                
                b1.descendingOrder(inputFile2, outputFile2);
                
                
                cout << endl;
                cout << "The file has been sorted" << endl;
                cout << endl;
            }
            

            inputFile2.close();
            // outputFile2.close();
            
        } // END OF IF STMT IF USER ENTERS THE OPTION 2
        else if(choice == 3)
        {
            cout << endl;
            cout << "You've choosen to perform a binary search.  Let's get started " << endl;
            cout << endl;
            
            ifstream inputFile3;
//            ofstream outputFile3;
            
            string inputFileName3;
//            string outputFileName3;
            
            
            /*
             TRY/CATCH BLOCK TO DETECT IF THE USER IS ENTERING THE INCORRECT FILE NAME AND REQUESTING THE USER REENTER THE FILE NAME
             */
            
            try
            {
                cout << "What's the name of the file you wish to use for input in this program? ";
                cin >> inputFileName3;
                cout << endl;
                
                inputFile3.open(inputFileName3.c_str());
                
                if(!inputFile3)
                {
                    throw exceptionError;
                }
                
            }
            catch(string exceptionString)
            {
                while(!inputFile3)
                {
                    cout << "The file name you provided to open was incorrect.  Please provide another title: ";
                    cin >> inputFileName3;
                    
                    inputFile3.open(inputFileName3.c_str());
                    
                }
            }
            
            // ASKING THE USER TO ENTER THE TARGET VALUE THEY WANT TO SEARCH FOR
            
            int binarySearchTargetValue;
            
            cout << "What number do you wish to look for in the file? ";
            cin >> binarySearchTargetValue;
            
            // CREATION OF THE BINARY SEARCH OBJECT AND THE PASSING HTE IFSTREAM AND TARGET VALUE TO SEARCH FOR
            
            BinarySearch bs1;
            
            bs1.searchForValue(inputFile3, binarySearchTargetValue);
            
            inputFile3.close();
            
            
        } // END OF IF STMT IF USER ENTERS THE OPTION 3
        else
        {
            cout << endl;
            cout << "You chosen to terminate the program." << endl;
            cout << endl;
            
        }
        
    } // END OF THE WHILE LOOP THAT DECIDES IF THE PROGRAM CONTINUES OR TERMINATES IF THE USER ENTERS 4
    
    return 0;
}




