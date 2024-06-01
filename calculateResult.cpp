//Starters 133 Division 4 (Rated)
//platforme:-codechef
//Q.name:-Powered Parameters

/*
******** Explanation of Approach ***********

Input Reading: The program reads the number of elements for each test case.
Sorting: The elements are sorted in ascending order to facilitate the calculation of differences.
Difference Calculation: The program calculates the sum of differences between the largest and smallest remaining elements iteratively. This is done by iterating from both ends towards the center of the sorted array.
Handling Odd Number of Elements: If the number of elements is odd, the middle element is added to the result since it has no pair to subtract.
Output: The result is printed for each test case.
Variables Explanation
numberOfElements: Stores the number of elements in the current test case.
elements: A vector that holds the elements of the current test case.
result: Stores the cumulative result calculated by summing the differences.
start, end: Indices used to iterate from both ends of the sorted vector towards the center.

*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate the desired result based on the sorted elements
int calculateResult() {
    int numberOfElements;
    cin >> numberOfElements;  // Read the number of elements

    vector<int> elements(numberOfElements);  // Vector to store the elements
    for (int &element : elements)
        cin >> element;  // Read each element into the vector

    // Sort the elements in ascending order
    sort(elements.begin(), elements.end());

    int result = 0;  // Initialize the result to 0
    // Iterate from both ends towards the middle, calculating the difference
    for (int start = 0, end = numberOfElements - 1; start < end; start++, end--)
        result += elements[end] - elements[start];

    // If the number of elements is odd, add the middle element to the result
    if (numberOfElements % 2 != 0)
        result += elements[numberOfElements / 2];

    return result;  // Return the final result
}

int main() {
    ios_base::sync_with_stdio(false);  // Disable synchronization with C I/O streams for faster input/output
    cin.tie(0);  // Untie cin from cout to speed up input

    int testCases;
    cin >> testCases;  // Read the number of test cases

    // Process each test case
    while (testCases--)
        cout << calculateResult() << "\n";  // Output the result for each test case

    return 0;
}
