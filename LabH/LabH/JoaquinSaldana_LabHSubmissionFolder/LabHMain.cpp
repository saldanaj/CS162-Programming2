/*
 Author: Joaquin Saldana 
 Date: 08/12/16
 Description: This is the main file for Lab H.  In this lab we are comparing a iterative algorithm 
 performance vs a recursive algorithm.  
 
 First, the program will request the user to enter the file where they wish to store the random number of 
 integers, including how many integers they wish to create and to what range.
 
 After the file is created, the program will read the file and implement the merge sort 
 algorithm recording the runtime execution and of each algorithm.  
 
 Afterwards we collect the data and compare the performance.
 
 Citations ...
 
 Time Source: http://www.cplusplus.com/forum/beginner/40563/ , http://www.cplusplus.com/forum/beginner/12216/
 
 Recursive Function Source: http://stackoverflow.com/questions/20912274/recursive-merge-sort-in-c
 
 Iterative Source: http://stackoverflow.com/questions/1557894/non-recursive-merge-sort
 
 Another source: http://www.geeksforgeeks.org/iterative-merge-sort/
 
 */

#include "JoaquinsUtilities.hpp"

// FUNCTION PROTOTYPES

void mergeSortRecursive(int arr[], int left, int right);

void merge(int arr[], int left, int middle, int right);

int min(int x, int y) { return (x<y)? x :y; }

void mergeSortIterative(int arr[], int n);


// MAIN FUNCTION

int main()
{
    srand(time(0));
    
    JoaquinsUtilities utility1;
    
    /***************************
    INTRODUCTION
    
    - introduction to the user on what the program does and what we will need from the user
     
    ****************************/
     
     
    cout << "We will be measuring the runtime performance of the mergesort algorithm iterative vs recursive." << endl;
    
    cout << endl;
    
    cout << "We are going to have to create a file with various random integers.  Before we do we will need you to ";
    cout << "provide some information " << endl;
    cout << endl;
    
    string prompt1 = "How many random integers do you wish to place in the file? ";
    string prompt2 = "What will be the highest integer possible (max threshold is 50,000)? ";
    
    int numberOfIntegers;
    int maxLimit;
    
    // DATA VALIDATIONS
    
    // The code validates the user entered a number and within the range requested
    
    
    while(utility1.getUtilitiesFlag() == false)
    {
        if(utility1.isANumber(numberOfIntegers, prompt1) == false)
        {
            cout << "ERROR: You did not enter a number.  ";
            cout << endl;
        }
        else if(utility1.isIntInRangeEqual(numberOfIntegers, 1, 50000) == false)
        {
            cout << "ERROR: You entered a number less than 1 or greater than 50,000. ";
            cout << endl;
        }
    }
    
    utility1.clearUtilitiesFlag();
    
    while(utility1.getUtilitiesFlag() == false)
    {
        if(utility1.isANumber(maxLimit, prompt2) == false)
        {
            cout << "ERROR: You did not enter a number.  ";
            cout << endl;
        }
        else if(utility1.isIntInRangeEqual(maxLimit, 0, 50000) == false)
        {
            cout << "ERROR: You entered a number less than 0 or greater than 50000. ";
            cout << endl;
        }
    }
    utility1.clearUtilitiesFlag();
    
    // Program creates a file with random integers with the file name provided by the user
    // with the maximum threshold provided by the user and the total numbers provided by the
    // user
    
    string fileName;
    
    ifstream inputFile;
    ofstream outputFile;
    
    cout << "What's the name of the output file you wish to create? ";
    cin >> fileName;
    
    outputFile.open(fileName.c_str());
    
    int randomNumber;
    
    for(int i = 0; i < numberOfIntegers; i++)
    {
        randomNumber = rand() % maxLimit;
        
        outputFile << randomNumber;
        outputFile << endl;
    }
    
    cout << endl;
    
    cout << "We will be using " << fileName << " file now to perform the merge sort program. " << endl;
    
    cout << endl;
    
    // =======================================================================================================

    // Recursive algorithm for the merge sort algorithm.  It
    
    inputFile.open(fileName.c_str());
    
    cout << "We will first time the runtime performance of the recursive merge sort algorithm" << endl;
    
    int recursiveNum;
    
    int recursiveIntArray[numberOfIntegers];
    
    int i = 0;
    
    while(inputFile)
    {
        inputFile >> recursiveNum;
        recursiveIntArray[i] = recursiveNum;
        i++;
    }

    // MERGE SORT FUNCTION RECURSIVE
    
    int start_s = clock(); // variable that holds the time the function started
    
    mergeSortRecursive(recursiveIntArray, 0, numberOfIntegers);
    
    int stop_s = clock(); // variable that holds the time the function ended
    
    cout << endl;
    
    cout << "Time elapsed for recursive function: " << (stop_s - start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
    
    //Print the sorted array
    
    cout << endl;
    
    cout << "Below is the sorted data file (recursively): " << endl;
    
    for(int i=0; i < numberOfIntegers; i++)
    {
        cout << recursiveIntArray[i] << endl;
    }
    
    inputFile.close();
    
    
    // =======================================================================================================
    
    
    inputFile.open(fileName.c_str());
    
    cout << endl;
    
    cout << "We will now time the runtime performance of the interative merge sort algorithm" << endl;
    
    int iterativeNum;
    
    int iterativeIntArray[numberOfIntegers];
    
    int j = 0;
    
    while(inputFile)
    {
        inputFile >> iterativeNum;
        iterativeIntArray[j] = iterativeNum;
        j++;
    }
    
    // MERGE SORT FUNCTION ITERATIVE
    
    int start2_s = clock();
    
    mergeSortRecursive(iterativeIntArray, 0, numberOfIntegers);
    
    int stop2_s = clock(); // variable that holds the time the function ended
    
    cout << endl;
    
    cout << "Time elapsed for iterative function: " << (double)(stop2_s - start2_s) / double (CLOCKS_PER_SEC)*1000 << endl;

    cout << endl;
    
    cout << "Below is the sorted data file (iterative): " << endl;
    
    for(int i=0; i < numberOfIntegers; i++)
    {
        cout << iterativeIntArray[i] << endl;
    }
    
    inputFile.close();

    
    // =======================================================================================================

    
    outputFile.close();
    
    cout << endl;
    
    return 0;
    
    
}  // END OF MAIN





/*********************************************************************
 Merge Function
 *********************************************************************/

void merge(int arr[], int left, int middle, int right)
{
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 =  right - middle;
    
    // CREATE TEMPORARY ARRAYS
    
    int L[n1], R[n2];
    
    // COPY DATA TO TEMPORARY ARRAYS
    
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];
    
    // MERGE THE ARRAYS
    
    i = 0; // INDEX OF FIRST SUBARRAY
    
    j = 0; // INDEX OF 2ND SUBARRAY
    
    k = left;
    
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    /* Copy the remaining elements of L[], if there
     are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    /* Copy the remaining elements of R[], if there
     are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/*********************************************************************
 Merge Sort Function / RECURSIVE
 *********************************************************************/


void mergeSortRecursive(int arr[], int left, int right)
{
    if (left < right)
    {
        int middle  = left + (right - left) / 2;
        
        // FIRST HALF AND 2ND HALF
        
        mergeSortRecursive(arr, left, middle);
        mergeSortRecursive(arr, middle + 1, right);
        
        merge(arr, left, middle , right);
    }
}


/*********************************************************************
 Merge Sort Function / ITERATIVE
 
 Citation Source: http://www.geeksforgeeks.org/iterative-merge-sort/
 *********************************************************************/

void mergeSortIterative(int arr[], int n)
{
    int curr_size;  // For current size of subarrays to be merged
    // curr_size varies from 1 to n/2
    int left_start; // For picking starting index of left subarray
    // to be merged
    
    // Merge subarrays in bottom up manner.  First merge subarrays of
    // size 1 to create sorted subarrays of size 2, then merge subarrays
    // of size 2 to create sorted subarrays of size 4, and so on.
    for (curr_size=1; curr_size<=n-1; curr_size = 2*curr_size)
    {
        // Pick starting point of different subarrays of current size
        for (left_start=0; left_start<n-1; left_start += 2*curr_size)
        {
            // Find ending point of left subarray. mid+1 is starting
            // point of right
            int mid = left_start + curr_size - 1;
            
            int right_end = min(left_start + 2*curr_size - 1, n-1);
            
            // Merge Subarrays arr[left_start...mid] & arr[mid+1...right_end]
            merge(arr, left_start, mid, right_end);
        }
    }
}


























