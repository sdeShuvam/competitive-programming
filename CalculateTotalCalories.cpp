//Starters 133 Division 4 (Rated)
//platforme:-codechef
//Q.name:-Devouring Donuts

/*

************* Explanation and Approach **********

Variable Declarations:

caloriesPerItem is used to store the number of calories in a single item.
numberOfItems is used to store the number of items consumed.
Input:

cin >> caloriesPerItem >> numberOfItems; reads the values for calories per item and the number of items from the standard input.
Calculation:

int totalCalories = caloriesPerItem * numberOfItems; computes the total calories by multiplying the calories per item by the number of items.
Output:

cout << totalCalories << endl; outputs the total calculated calories.
Approach:
The approach used here is straightforward:

Read input values.
Perform a simple multiplication to calculate the total calories.
Output the result.


*/


#include <iostream>
using namespace std;

int CalculateTotalCalories() {
    int caloriesPerItem; // Variable to store calories per item
    int numberOfItems;   // Variable to store the number of items

    // Input the values for calories per item and number of items
    cin >> caloriesPerItem >> numberOfItems; 
    
    // Calculate the total calories
    int totalCalories = caloriesPerItem * numberOfItems; 
    
    // Output the total calories
    cout << totalCalories << endl; 
    
    return 0;
}

