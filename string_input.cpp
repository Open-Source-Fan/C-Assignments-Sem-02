//Accepts a string from the user
#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  // Takes input with spaces
    cout << "User inputs: " << str << endl;
    return 0;
}
