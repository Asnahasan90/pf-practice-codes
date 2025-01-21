#include<iostream>
using namespace std;

int main() {
    int arr1[7], arr2[7];

    // First loop to input values into arr1
    for(int i = 0; i <= 6; i++) {
        cout << "Enter a number for arr1[" << i << "]: ";
        cin >> arr1[i];
    }

    // Second loop to input values into arr2
    for(int j = 0; j <= 6; j++) {
        cout << "Enter a number for arr2[" << j << "]: ";
        cin >> arr2[j];
    }
return 0;
}
