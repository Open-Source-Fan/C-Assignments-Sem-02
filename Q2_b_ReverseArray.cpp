//Reverse the array
#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Enter the size of the array: ";
    cin >> a;

    int arr[a];

    cout << "Enter " << a << " elements: ";
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    cout << "Reversed array: ";
    for (int i = a - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
