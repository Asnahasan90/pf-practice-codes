#include<iostream>
using namespace std;

int main() {
    int arr1[6], arr2[6];  

    for (int i = 0; i < 6; i++) {
        cout << "Enter value for arr1[" << i << "]: ";
        cin >> arr1[i];
    }

    for (int i = 0; i < 6; i++) {
        cout << "Enter value for arr2[" << i << "]: ";
        cin >> arr2[i];
    }

    
    cout << "Sum of arr1[1] and arr2[5]: " << arr1[1] + arr2[5] << endl;

    return 0;
}
