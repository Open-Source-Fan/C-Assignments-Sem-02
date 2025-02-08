//display the second largest and second smallest elements in the array
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter size: ";
    cin >> a;

    int arr[a];
    cout << "Enter " << a << " elements: ";
    for (int i = 0; i < a; i++) cin >> arr[i];

    int max1 = arr[0], max2 = arr[0];
    int min1 = arr[0], min2 = arr[0];

    for (int i = 1; i < a; i++) {
        if (arr[i] > max1) max2 = max1, max1 = arr[i];
        else if (arr[i] > max2 && arr[i] != max1) max2 = arr[i];

        if (arr[i] < min1) min2 = min1, min1 = arr[i];
        else if (arr[i] < min2 && arr[i] != min1) min2 = arr[i];
    }

    cout << "Second Largest: " << max2 << "\nSecond Smallest: " << min2;
    return 0;
}
