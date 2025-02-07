#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Accept size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> n;

    // Dynamically allocate array of size 'n'
    int arr[n];

    // Accept array elements from the user
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display the array
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    return 0;
}
