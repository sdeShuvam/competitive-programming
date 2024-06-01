//Starters 133 Division 4 (Rated)
//platforme:-codechef
//Q.name:- Legs on a Farm

/*
******** Explanation of Approach ***********

The program determines the minimum number of operations needed to make a given number 
𝑁
N a multiple of 4 using the following steps:

Subtract 2 until 
𝑁
N is divisible by 4, counting each subtraction.
Divide by 4 the resulting number, counting each division.
Sum the operations to get the total number of steps required.

*/

#include <iostream>
using namespace std;

int main() {
    int testCaseCount;
    cin >> testCaseCount;  // Read the number of test cases
    while (testCaseCount--) {
        int stepsRequired = 0;  // Initialize the steps required to zero
        int number;
        cin >> number;  // Read the input number for the current test case
        
        // Keep decrementing the number by 2 until it becomes divisible by 4
        while (number % 4 != 0) {
            stepsRequired++;  // Increment the step count for each decrement
            number -= 2;  // Decrement the number by 2
        }
        
        // Once number is divisible by 4, calculate the quotient of number / 4
        stepsRequired += number / 4;
        
        // Output the total steps required for the current test case
        cout << stepsRequired << endl;
    }
    return 0;
}
