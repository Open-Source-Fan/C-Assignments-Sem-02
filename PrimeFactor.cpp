#include <iostream>
using namespace std;

int main() {
    int n, i;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 0 && n > 1) {  
        cout << n << " is a prime number.\n";
        cout << "Factors: ";
        for (i = 1; i <= n; i++) {  // Prime hai toh saare factors print karo
            if (n % i == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    } else {
        cout << n << " is not a prime number.\n";
    }

    return 0;
}
