//Starters 133 Division 4 (Rated)
//platforme:-codechef
//Q.name:-Maximum Alternating Sum

/* 

******** Explanation of Approach ***********

Input Handling:

The number of test cases T is read.
For each test case, the size of the array N and the array elements themselves are read.
Pair Counting Logic:

We iterate over each element arr[i] and treat it as the base of the power.
If the base value is 1, every element in the array will satisfy the condition 1^p <= arr[j] for any p, hence we directly add N pairs to the count.
For bases other than 1, we calculate successive powers of arr[i] and check how many elements in the array are greater than or equal to this power. We also take care to handle overflow conditions.
Overflow Handling:

The multiplication of powerValue and baseValue is checked to ensure it does not exceed the maximum value for long long. If it does, the loop breaks to avoid incorrect results.
Output:

The total number of valid pairs for each test case is printed.

*/


#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int calculatePairs() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int arraySize;
        cin >> arraySize;

        // Initialize the array with an extra element to use 1-based indexing
        vector<int> arr(arraySize + 1);
        for (int i = 1; i <= arraySize; ++i) {
            cin >> arr[i];
        }

        long long totalPairs = 0;

        for (int i = 1; i <= arraySize; ++i) {
            long long baseValue = static_cast<long long>(arr[i]);

            // If the base value is 1, it will always be less than or equal to any value in the array
            if (baseValue == 1) {
                totalPairs += static_cast<long long>(arraySize);
            } else {
                long long powerValue = 1;

                for (int j = 1; j <= arraySize; ++j) {
                    // Check for overflow in the next multiplication
                    if (powerValue > numeric_limits<long long>::max() / baseValue) {
                        powerValue = numeric_limits<long long>::max();
                        break;
                    }
                    powerValue *= baseValue;
                    long long compareValue = static_cast<long long>(arr[j]);

                    // If the current power value is less than or equal to the compare value
                    if (powerValue <= compareValue) {
                        totalPairs++;
                    }
                }
            }
        }

        cout << totalPairs << endl;
    }

    return 0;
}
