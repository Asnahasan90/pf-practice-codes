#include<iostream>
using namespace std;

// Function to compute the sum of two numbers and return the square of the sum
int squareOfSum(int a, int b) {
    int sum = a + b;  // Calculate the sum of the two numbers
    return sum * sum; // Return the square of the sum
}

int main() {
    int num1, num2;
    // Taking two integer inputs from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Calling the function to calculate the square of the sum and print it
    int result = squareOfSum(num1, num2);
    cout << "The square of the sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
