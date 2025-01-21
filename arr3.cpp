#include<iostream>
using namespace std;

int main() {
    // Initialize a 3x5 array (3 rows, 5 columns)
    int arr[3][5] = {
        {3, 4, 4, 2, 3},
        {2, 3, 4, 5, 6},
        {4, 5, 6, 7, 8}
    };
    
    int sum = 0;
    
    // Declare loop variables i and j
    int i, j;
    
    // Iterate in reverse order (i from 2 to 0, j from 4 to 0)
    for (i = 2; i >= 0; i--) {
        for (j = 4; j >= 0; j--) {
            sum += arr[i][j];  // Add the current element to sum
            
            // If the element is divisible by 3 or 5, print it
            if (arr[i][j] % 3 == 0 || arr[i][j] % 5 == 0) {
                cout << arr[i][j] << " ";
            }
        }
    }

    // Optionally, print the sum of all elements
    cout << "\nSum of all elements: " << sum << endl;

    return 0;
}
