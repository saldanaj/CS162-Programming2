/*
 Author: Joaquin Saldana 
 Date: 07/06/2016
 
 Description: This main program is broken down in various sections.  Each section is numbered and descriptions can 
 be found in the reflections and test plan document.  In summary here are the sections: 
 
 1.	Create the necessary objects, this includes the 2d array of data type pointer to Critter
 2.	Introduction to the program and rules
 3.	Request user input on how many Ants and Doodlebugs and validate input
 4.	Placement of critter’s in random areas of the Grid
 5.	Print the grid to show the critter’s starting positions
 6. Call of class functions and logic
 7.	Deallocating the array and freeing up the memory for loop to destroy the 2d dynamic array and end of program

 This main program uses the Critter, Ant, and Doodlebug class but never instanties the Critter class.  It's meant to
 simulate random movement for the critter's in the grid of size 20 x 20.  
 
 */


#include "Critter.hpp"
#include "Ant.hpp"
#include "Doodlebug.hpp"


const int GRIDSIZE = 20;

int main()
{
    /*****************************************************************************************
     1. CREATION OF UTILITY OBJECT, SEEDING RANDOM NUM FUNCTION, CREATION OF THE 2D ARRAY 20X20
     AND THE DELCARING OF THE CRITTER POINTER WHICH WILL BE USED THROUGHOUT MAIN
     *****************************************************************************************/
    
    JoaquinsUtilities utility;
    
    srand(time(0));
    
    Critter *** gridArray2D = new Critter**[GRIDSIZE];
    
    for(int a = 0; a < GRIDSIZE; a++)
    {
        gridArray2D[a] = new Critter*[GRIDSIZE];
    }
    
    for(int a = 0; a < GRIDSIZE; a++)
    {
        for(int b = 0; b < GRIDSIZE; b++)
        {
            gridArray2D[a][b] = NULL;
        }
    }
     
    Critter * critterPointer;
    
    /*****************************************************************************************
     2. INTRODUCTION
     *****************************************************************************************/
    
    cout << "Welcome, this program creates a grid in which you will be able to insert critters known as ";
    cout << "Ants and Doodlebugs.  The bugs will each move around the grid, breed, eat, and eventually ";
    cout << "die." << endl;
    
    cout << endl;
    
    cout << "You will be asked how many critter's you wish to add to the program.  There is a max ";
    cout << "limit of 200 critter's since it's a 20x20 grid. Enjoy! " << endl;
    
    cout << endl;
    
    /*****************************************************************************************
     3. PROMPTING USER HOW MANY ANTS AND DOODLEBUGS THEY WANT TO ADD TO THE PROGRAM/GRID.  THIS
     SECTION OF CODE PROMPTS THE USER AND VALIDATES INPUT.  THIS IS USING FUNCTIONS FROM MY 
     PERSONALLY CREATED UTILITIES CLASS.
     *****************************************************************************************/
    
    string prompt1 = "How many Ant's do you wish to add to the grid? You cannot add more than 100. ";
    
    string prompt2 = "How many Doodlebug's do you wish to add to the grid? You cannot add more than 100. ";
    
    int numberOfAnts = 0;
    
    int numberOfDoodlebugs = 0;
    
    // INPUT VALIDATION LOOP FOR NUMBER OF ANTS
    
    while(utility.getUtilitiesFlag() == false)
    {
        if(utility.isANumber(numberOfAnts, prompt1) == false)
        {
            cout << "You did not enter a number.  ";
        }
        else if(utility.isIntInRangeEqual(numberOfAnts, 1, 100) == false)
        {
            cout << "You entered a number less than 1 and greater than 100. ";
        }
    }
    
    utility.clearUtilitiesFlag();
    
    cout << endl;
    
    // INPUT VALIDATION LOOP FOR NUMBER OF DOODLEBUGS
    
    while(utility.getUtilitiesFlag() == false)
    {
        if(utility.isANumber(numberOfDoodlebugs, prompt2) == false)
        {
            cout << "You did not enter a number.  ";
        }
        else if(utility.isIntInRangeEqual(numberOfDoodlebugs, 1, 100) == false)
        {
            cout << "You entered a number less than 1 and greater than 100. ";
        }
    }
    
    utility.clearUtilitiesFlag();
    
    cout << endl;

    /*****************************************************************************************
     4. PLACING OF CRITTERS IN RANDOM AREAS OF THE GRID
     *****************************************************************************************/
    
    for(int a = 0; a < numberOfAnts; a++)
    {
        int row = rand() % GRIDSIZE;
        
        int column = rand() % GRIDSIZE;
        
        while(gridArray2D[row][column] != NULL)
        {
            row = rand() % GRIDSIZE;
    
            column = rand() % GRIDSIZE;
        }
        
        critterPointer = new Ant();
        
        gridArray2D[row][column] = critterPointer;
        
        cout << "Ant was added to row " << row + 1 << " and column " << column + 1 << endl;
    }
    
    cout << endl;
    
    for(int a = 0; a < numberOfDoodlebugs; a++)
    {
        int row = rand() % GRIDSIZE;
        
        int column = rand() % GRIDSIZE;
        
        while(gridArray2D[row][column] != NULL)
        {
            row = rand() % GRIDSIZE;
            
            column = rand() % GRIDSIZE;
        }
        
        critterPointer = new Doodlebug();
        
        gridArray2D[row][column] = critterPointer;
        
        cout << "Doodlebug was added to row " << row + 1 << " and column " << column + 1 << endl;
    }
    
    cout << endl;
    
    /*****************************************************************************************
     5. PRINTING THE GRID TO SHOW USER WHERE CRITTERS WERE PLACED.
     *****************************************************************************************/
    
    for (int a = 0; a < GRIDSIZE; a++)
    {
        for (int b = 0; b < GRIDSIZE; b++)
        {
            if(gridArray2D[a][b] == NULL)
            {
                cout << "| ";
            }
            else if(gridArray2D[a][b]->critterName() == "Ant")
            {
                cout << "|A";
            }
            else
            {
                cout << "|D";
            }
            
            
            if( b == GRIDSIZE-1)
            {
                std::cout << "|";
            }
        }
        
        std::cout << std::endl;
    }
    
    cout << endl;

    /*****************************************************************************************
     6. CALL CLASS FUNCTIONS AND REQUEST USER WHEN TO CONTINUE
     *****************************************************************************************/
    
    
    cout << "If you wish to terminate the program, you must enter the number 0 (zero) when asked to terminate.  Else type any number to continue the program.  The program will now run. " << endl;
    
    string prompt3 = "Do you wish to terminate? If so enter 0, else enter any other number:  ";
    
    cout << endl;
    
    int exit = 1;
    
    int nextMove = 0;
    
    int row = 0;
    int column = 0;
    
    int newRow = 0;
    int newColumn = 0;
    
    Critter * nextCritter = NULL;
    
    /*****************************************************************************************
     6a. WHILE LOOP THAT CONTINUES UNTIL USER ENTER'S 0 TO STOP IT
     *****************************************************************************************/
    
    while(exit != 0)
    {
    
        for(int a = 0; a < GRIDSIZE; a++)
        {
            for(int b = 0; b < GRIDSIZE; b++)
            {
                /*****************************************************************************************
                 6ai. INDEXES VARIABLES ARE DECLARED AND CURRENT INDEX VALUES ARE STORED IN THEM
                 *****************************************************************************************/
                
                row = a;
                column = b;
                
                newRow = a;
                newColumn = b;
                
                critterPointer = gridArray2D[row][column]; // GET'S THE OBJECT IN THAT ARRAY LOCATION
                
                /*****************************************************************************************
                 6aii. CHECK TO SEE IF THE CRITTERPOINTER IS NOT POINT TO NULL, AND IF NOT, THAT
                 THE CRITTER HAS NOT YET BEEN MOVED
                 *****************************************************************************************/
                
                if(critterPointer != NULL && critterPointer->hasTheCritterMoved() == false)
                {
                    
                    nextMove = critterPointer->move();
                    
                    /*****************************************************************************************
                     6aii1. CALL MOVE FUNCTION TO DETERMINE IF IT'S GOING TO MOVE LEFT, RIGHT, UP, DOWN.
                     *****************************************************************************************/
                    
                    if(nextMove == 1) // MOVE RIGHT
                    {
                        newColumn = newColumn + 1;
                    }
                    else if(nextMove == 2) // MOVE LEFT
                    {
                        newColumn = newColumn - 1;
                    }
                    else if(nextMove == 3) // MOVE UP
                    {
                        newRow = newRow - 1;
                    }
                    else // MOVE DOWN
                    {
                        newRow = newRow + 1;
                    }
                    
                    /*****************************************************************************************
                     6aii2a. CHECKING TO ENSURE THE INDEXES ARE NOT OUT OF BOUNDS.  IF THEY ARE
                     WE DONT SEE WHAT THE NEXT CRITTER IS
                     *****************************************************************************************/
                    
                    if(newRow >= 0 && newRow < GRIDSIZE && newColumn >= 0 && newColumn < GRIDSIZE)
                    {
                        /*****************************************************************************************
                         6aii2a. IF STMT CHKING IF THE NEXT SPACE IS POINTING TO NULL
                         *****************************************************************************************/
                        
                        if(gridArray2D[newRow][newColumn] == NULL)
                        {
                            /***********************************************
                             6aii2ai. CALL THE EAT FUNCTIONS AND CHECKS IF
                             THE CRITTER NEEDS TO BREED. IF SO, IT LEAVES ITS 
                             OFFSPRING IN THE OLD SPACE, IF NOT IT SIMPLY 
                             MOVES THE CRITTER TO THE NEW POSITION AND THEN CALLS 
                             THE ALIVE FUNCTION TO DETERMINE IF IT NEEDS TO DIE.
                             **********************************************/
                           
                            gridArray2D[row][column]->eat(gridArray2D[newRow][newColumn]);
                            
                            if(gridArray2D[row][column]->breed() == false)
                            {
                                gridArray2D[newRow][newColumn] = gridArray2D[row][column];
                                
                                gridArray2D[row][column] = NULL;
                                
                                if(gridArray2D[newRow][newColumn]->isAlive() == false)
                                {
                                    delete gridArray2D[newRow][newColumn];
                                    
                                    gridArray2D[newRow][newColumn] = NULL;
                                }
                            }
                            else
                            {
                                
                                gridArray2D[newRow][newColumn] = gridArray2D[row][column];
                                
                                if(gridArray2D[newRow][newColumn]->critterName() == "Ant")
                                {
                                    gridArray2D[row][column] = new Ant();
                                    
                                }
                                else
                                {
                                    gridArray2D[row][column] = new Doodlebug();
                                }
                                
                                if(gridArray2D[newRow][newColumn]->isAlive() == false)
                                {
                                    delete gridArray2D[newRow][newColumn];
                                    
                                    gridArray2D[newRow][newColumn] = NULL;
                                }
                            }
                            
                        } // END OF IF STMT IF THE NEXT "SPACE" IS POINTING TO NULL
                        else
                        {
                            /*********************************************
                             6aii2b. IF NEXT SPACE IS NOT POINTING TO NULL.  
                             CALL THE EAT FUNCTION AND VERIFY IF THE CURRENT 
                             BUG IS A DOODLEBUG, AND IF THE OBJECT IN THE 
                             NEXT SPACE IS AN ANT, IF SO THEN IT WILL BE EATEN.
                             *********************************************/
                            
                            gridArray2D[row][column]->eat(gridArray2D[newRow][newColumn]);
                            
                            if(gridArray2D[row][column]->critterName() == "Doodlebug" && gridArray2D[newRow][newColumn]->critterName() == "Ant")
                            {
                                
                                delete gridArray2D[newRow][newColumn];
                                
                                if(gridArray2D[row][column]->breed() == false)
                                {
                                    gridArray2D[newRow][newColumn] = gridArray2D[row][column];
                                    
                                    gridArray2D[row][column] = NULL;
                                    
                                    if(gridArray2D[newRow][newColumn]->isAlive() == false)
                                    {
                                        delete gridArray2D[newRow][newColumn];
                                        
                                        gridArray2D[newRow][newColumn] = NULL;
                                    }
                                }
                                else
                                {
                                    gridArray2D[newRow][newColumn] = gridArray2D[row][column];
                                    
                                    gridArray2D[row][column] = new Doodlebug();
                                    
                                    if(gridArray2D[newRow][newColumn]->isAlive() == false)
                                    {
                                        delete gridArray2D[newRow][newColumn];
                                        
                                        gridArray2D[newRow][newColumn] = NULL;
                                    }
                                    
                                } // END OF ELSE STMT CHKING IF CURRENT OBJECT IS SUPPOSED TO BREED
                                
                            } // END IF STMT  ELSE FOR IF STMT CHKING IF THE OBJECT IS A DOODLEBUG WAITING TO EAT AN ANT
                            else
                            {
                                /*********************************************
                                 6aii2bi. IF NEXT OBJECT CANNOT BE EATEN THEN IT
                                 SIMPLY CALLS THE CLASS FUNCTION TO DETERMINE IF THE OBJECT NEEDS TO BE DESTRYOED.
                                 *********************************************/
                               // gridArray2D[row][column]->eat(NULL);
                                
                                gridArray2D[row][column]->breed();
                                
                                if(gridArray2D[row][column]->isAlive() == false)
                                {
                                    delete gridArray2D[row][column];
                                    
                                    gridArray2D[row][column] = NULL;
                                }
                            
                            } // END OF ELSE STMT TIED TO IF STMT WHETHER OBJECT IS DOODLEBUG GOING TO EAT ANT
                            
                        } // END OF ELSE STMT TIED TO IF STMT FOR NEXT "SPACE" IS POINTING TO NULL
                        
                    } // IF STMT CHECKING THE ROW AND COLUMN INTS ARE NOT OUT OF BOUNDS
                    else
                    {
                        /*****************************************************************
                         6aii3. IF THE NEW COLUMN OR ROW IS OUT OF BOUNDS THEN THE OBJECT
                         IS NOT MOVED AND THE CLASS FUNCTIONS ARE CALLED TO CHECK IF THE OBJECT 
                         NEEDS TO BE DESTRYOED/DIE.
                         ****************************************************************/
                        
                        gridArray2D[row][column]->eat(NULL);
                        
                        gridArray2D[row][column]->breed();
                        
                        if(gridArray2D[row][column]->isAlive() == false)
                        {
                            delete gridArray2D[row][column];
                            
                            gridArray2D[row][column] = NULL;
                        }
                        
                    } // END OF ELSE STMT CONNECTED TO IF STMT CHECKING THAT THE NEW ROW/COLUMN IS IN BOUNDS
                    
                } // END OF IF STMT THAT CHECKS THAT THE SPACE IS NOT POINT TO NULL OR TO AN OBJECT THAT WAS ALREADY MOVED
                
            } // END OF 2ND FOR LOOP (NESTED LOOP)
            
        } // END OF FIRST FOR LOOP
        
        /*****************************************************************
         6aiii. RESET ALL OF THE CRITTER'S HASMOVED BOOLEAN VARIABLE
         THIS ALLOWS US TO GENERATE A MOVE FOR THE CRITTER
         ****************************************************************/
        
        for(int i = 0; i < GRIDSIZE; i++)
        {
            for(int j = 0; j < GRIDSIZE; j++)
            {
                if(gridArray2D[i][j] != NULL)
                {
                    gridArray2D[i][j]->resetHasMoved();
                }
            }
        }

        /*****************************************************************
         6aiv.PRINT THE GRID AGAIN TO SHOW THE NEW MOVES
         ****************************************************************/
        
        for (int a = 0; a < GRIDSIZE; a++)
        {
            for (int b = 0; b < GRIDSIZE; b++)
            {
                if(gridArray2D[a][b] == NULL)
                {
                    cout << "| ";
                }
                else if(gridArray2D[a][b]->critterName() == "Ant")
                {
                    cout << "|A";
                }
                else
                {
                    cout << "|D";
                }
                
                
                if( b == GRIDSIZE-1)
                {
                    std::cout << "|";
                }
            }
            std::cout << std::endl;
        }
        cout << endl;
        
        /*****************************************************************
         6aiv. PROMPTING USER TO ENTER 0 IF THEY WISH TO TERMINATE THE PROGRAM
         ****************************************************************/
        
        while(utility.getUtilitiesFlag() == false)
        {
            if(utility.isANumber(exit, prompt3) == false)
            {
                cout << "You did not enter a number.  ";
            }
        }
        
        utility.clearUtilitiesFlag();
        
        /*****************************************************************
         6b. END OF WHILE LOOP
         ****************************************************************/
        
    }// END OF WHILE
    
    /*****************************************************************************************
     7. DEALLOCATING THE ARRAY AND FREEING UP THE MEMORY FOR LOOP TO DESTROY THE ARRAY
     *****************************************************************************************/
    
    // DELETION OF EACH CRITTER IN THE GRID
    
    for(int i = 0; i < GRIDSIZE; i++)
    {
        for(int j = 0; j < GRIDSIZE; j++)
        {
            if(gridArray2D[i][j] != NULL)
            {
                critterPointer = gridArray2D[i][j];
                
                delete critterPointer;
            }
        }
    }
    
    // DELETION OF THE DYNAMIC 2D ARRAY
    
    for(int a = 0; a < GRIDSIZE; a++)
    {
        delete [] gridArray2D[a];
    }
    
    delete [] gridArray2D;
    
    // SETTING ALL POINTERS TO POINT TO NULL
    
    gridArray2D = NULL;
    
    critterPointer = NULL;
    
    return 0;
    
} // END OF MAIN
















