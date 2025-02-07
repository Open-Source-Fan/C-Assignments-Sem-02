//If the number is prime check the next prime number greater than n
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int next = n + 1; 

    while (true) {  
        int i;
        for (i = 2; i < next; i++) {
            if (next % i == 0)
            break; 
        }
        if (i == next) {
            cout << "Next prime after " << n << " is: " << next << endl;
            break;
        }
        next++; // Check next numbe
    }

    return 0;
}
