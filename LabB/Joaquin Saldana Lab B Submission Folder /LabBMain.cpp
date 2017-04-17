/*
 Author: Joaquin Saldana
 Date: 07/03/16
 Description: This is the main .cpp file for the classes Dice and LoadDice .hpp and .cpp file.  The user will be prompted to enter the number of iterations they wish toe program to perform and the number of sides they wish the dice to have.  If the user enters 0 the program will automatically create a standrd default constructor for each dice.
 
 The program performs standard validation to ensure the user entered a number and is do not exceed the range requested.
 
 In addition, main will output three two files.  It will output a .txt file and a .csv file so we can perform the statistcs required for the excercise.
 */


#include "JoaquinsUtilities.hpp"
#include "Dice.hpp"
#include "LoadedDice.hpp"


int main()
{
    // initiating the several variables for main
    // this includes pointers to 2 standard dice and 2 loaded dice
    // initialization of my utilities object and the seeding of the random num generator
    
    JoaquinsUtilities utility;
    
    ofstream outputFile;
    ofstream excelFile;
    
    outputFile.open("LabBOutput.txt");
    excelFile.open("LabBOutput.csv");
    
    srand(time(0)); 
    
    int numberOfLoops;
    
    int numberOfSides;
    
    Dice * standardDice1;
    Dice * standardDice2;
    
    LoadedDice * loadedDice1;
    LoadedDice * loadedDice2;
    
    int standardDiceAccumulator = 0;
    
    int loadedDiceAccumulator = 0;
    
    int i = 0 ;
    
    // GREETING
    
    cout << "Welcome to the simulation of a Dice game.  There are two types of Dice, a standard and loaded Dice.  We are here to simulate the difference between the two." << endl;
    
    cout << endl;
    
    string prompt1 = "How many times do you want to roll each set of Dice? " ;
    
    // INPUT VALIDATION FOR THE NUMBER OF LOOPS/ITERATIONS
    
    while(utility.getUtilitiesFlag() == false)
    {
        if(utility.isANumber(numberOfLoops, prompt1) == false)
        {
            cout << "You did not enter a number.  ";
        }
        else if(utility.isIntInRangeEqual(numberOfLoops, 1, 1000) == false)
        {
            cout << "You entered a number less than 1 and greater than 1000. ";
        }
    }
    
    utility.clearUtilitiesFlag();
    
    cout << endl;
    
    string prompt2 = "How many sides do you want for each Dice? ";
    
    // INPUT VALIDATION FOR THE NUMBER OF SIDES ON DICE
    
    while(utility.getUtilitiesFlag() == false)
    {
        if(utility.isANumber(numberOfSides, prompt2) == false)
        {
            cout << "You did not enter a number.  ";
        }
        else if(utility.isIntInRangeEqual(numberOfSides, 1, 1000) == false)
        {
            cout << "You did not enter a number greather an 1. ";
        }
    }

    utility.clearUtilitiesFlag();
    
    cout << endl;
    
    // PREPARING TO ROLL THE DICE AND OUTPUT THE RESULTS ALONG W/ THE ACCUMULATORS
    
    standardDice1 = new Dice(numberOfSides);
    standardDice2 = new Dice(numberOfSides);

    loadedDice1 = new LoadedDice(numberOfSides);
    loadedDice2 = new LoadedDice(numberOfSides);
    
    
    cout << "Standard Dice 1   Standard Dice 2   Total  |  Loaded Dice 1   Loaded Dice 2   Total" << endl;
    outputFile << "Standard Dice 1   Standard Dice 2   Total  |  Loaded Dice 1   Loaded Dice 2   Total" << endl;
    excelFile << "Standard Dice 1,Standard Dice 2,Total,Loaded Dice 1,Loaded Dice 2,Total" << endl;

    cout << "---------------   ---------------   -----  |  -------------   -------------   -----" << endl;
    outputFile << "---------------   ---------------   -----  |  -------------   -------------   -----" << endl;
    
    while(i < numberOfLoops)
    {
        // in this section of code the while loop is outputing information to the console, to a .txt file,
        // and to an excel .csv file.  The excel file will be used to perform the descriptive statistics
        // required by the excercise.
        
        standardDice1->rollDice();
        standardDice2->rollDice();
        loadedDice1->rollDice();
        loadedDice2->rollDice();
        
        standardDiceAccumulator = standardDice1->numRolled() + standardDice2->numRolled();
        
        loadedDiceAccumulator = loadedDice1->numRolled() + loadedDice2->numRolled();
        
        
        cout << left << setw(18) << standardDice1->numRolled();
        outputFile << left << setw(18) << standardDice1->numRolled();
        excelFile << standardDice1->numRolled(),
        excelFile << "," ;
        
        cout << left << setw(19) << standardDice2->numRolled();
        outputFile << left << setw(19) << standardDice2->numRolled();
        excelFile << standardDice2->numRolled(),
        excelFile << "," ;
        
        cout << left << setw(6) << standardDiceAccumulator;
        outputFile << left << setw(6) << standardDiceAccumulator;
        excelFile << standardDiceAccumulator,
        excelFile << "," ;
        
        cout << "|  ";
        outputFile << "|  ";
        
        cout << left << setw(16) << loadedDice1->numRolled();
        outputFile << left << setw(16) << loadedDice1->numRolled();
        excelFile << loadedDice1->numRolled(),
        excelFile << "," ;
        
        cout << left << setw(16) << loadedDice2->numRolled();
        outputFile << left << setw(16) << loadedDice2->numRolled();
        excelFile << loadedDice2->numRolled(),
        excelFile << "," ;
        
        cout << left << setw(7) << loadedDiceAccumulator;
        outputFile << left << setw(7) << loadedDiceAccumulator;
        excelFile << loadedDiceAccumulator,
        
        cout << endl;
        outputFile << endl;
        excelFile << endl;
        
        i++;
    }
    
    cout << endl;
    
    // DEALLOCATING DYNAMIC MEMORY AND REASSIGNING POINTERS TO NULL
    
    delete standardDice1;
    delete standardDice2;
    delete loadedDice1;
    delete loadedDice2;
    
    standardDice1 = NULL;
    standardDice2 = NULL;
    loadedDice1 = NULL;
    loadedDice2 = NULL;
    
    // CLOSE OUTPUT FILE
    
    outputFile.close();
    
    return 0;
    
} // END OF MAIN




