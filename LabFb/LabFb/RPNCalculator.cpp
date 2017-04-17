/*
 Author: Joaquin Saldana
 Date: 08/12/16
 Description: this is the implementation file to the reverse polish notation calculator.  This header file 
 will define the function prototypes of the addition, subtraction, division, and multiplication operators.
 
 */


#include "RPNCalculator.hpp" 

// CLASS CONSTRUCTOR

RPNCalculator::RPNCalculator(Stack * stackCreated)
{
    s1 = stackCreated;
}

// CLASS DESTRUCTOR

//RPNCalculator::~RPNCalculator()
//{
//    delete s1;
//}

// CLASS FUNCTIONS

/*
 Function: isAnOperators()
 Parameter: string 
 Return: boolean (true or false) 
 Description: checks to see if the value entered is an operator for the addition, subtraction, 
 multiplication, and divsion functions.  If not, it returns false.
 */
 
bool RPNCalculator::isAnOperator(string input)
{
    string operators[] = { "-", "+", "*", "/"};
    
    for(int i = 0; i < 4; i++)
    {
        if(operators[i] == input)
        {
            return true;
        }
    }
    
    return false;
}

/*
 Function: divisionRPN()
 Parameter: N/A
 Return: N/A
 Description: function pops the last two numbers on the stack and performs a division printing the result
 and pushing the result on the stack
 */

void RPNCalculator::divisionRPN()
{
    int numberOne = s1->peek();
    s1->pop();
    
    int numberTwo = s1->peek();
    s1->pop();
    
    int result = numberTwo / numberOne;
    
    cout << endl;
    cout << "We divided " << numberTwo << " by " << numberOne << " and the result was: " << result << endl;
    cout << result << " has been pushed to the stack" << endl;
    cout << endl;
    
    s1->push(result);
}

/*
 Function: multiplicationRPN()
 Parameter: N/A
 Return: N/A
 Description: function pops the last two numbers on the stack and performs a multiplication printing the
 result and pushing the result on the stack
 */

void RPNCalculator::multiplicationRPN()
{
    int numberOne = s1->peek();
    s1->pop();
    
    int numberTwo = s1->peek();
    s1->pop();
    
    int result = numberTwo * numberOne;
    
    cout << endl;
    cout << "We multiplied " << numberTwo << " by " << numberOne << " and the result was: " << result << endl;
    cout << result << " has been pushed to the stack" << endl;
    cout << endl;
    
    s1->push(result);
}

/*
 Function: additionRPN()
 Parameter: N/A
 Return: N/A
 Description: function pops the last two numbers on the stack and performs a addition printing the
 result and pushing the result on the stack
 */

void RPNCalculator::additionRPN()
{
    int numberOne = s1->peek();
    s1->pop();
    
    int numberTwo = s1->peek();
    s1->pop();
    
    int result = numberTwo + numberOne;
    
    cout << endl;
    cout << "We added " << numberTwo << " with " << numberOne << " and the result was: " << result << endl;
    cout << result << " has been pushed to the stack" << endl;
    cout << endl;
    
    s1->push(result);
}

/*
 Function: subtractionRPN()
 Parameter: N/A
 Return: N/A
 Description: function pops the last two numbers on the stack and performs a subtraction printing the
 result and pushing the result on the stack
 */

void RPNCalculator::subtractionRPN()
{
    int numberOne = s1->peek();
    s1->pop();
    
    int numberTwo = s1->peek();
    s1->pop();
    
    int result = numberTwo - numberOne;
    
    cout << endl;
    cout << "We added " << numberTwo << " with " << numberOne << " and the result was: " << result << endl;
    cout << result << " has been pushed to the stack" << endl;
    cout << endl;
    
    s1->push(result);
}





























