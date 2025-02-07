//Check if a number is prime or not.
#include <iostream>
using namespace std;
int main(){
    int n, i;
    
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is NOT a Prime Number." << endl;
        return 0;  // Directly exit if n <= 1
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << n << " is NOT a Prime Number." << endl;
            return 0;  // Exit as soon as a factor is found
        }
    }

    cout << n << " is a Prime Number." << endl;
    return 0;
}
