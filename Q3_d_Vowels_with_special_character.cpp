//Replacing all the vowels in a string with a special character @
#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;  

    for (char &ch : str) {  
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            ch = '@';  
        }
    }

    cout << "Replaced string: " << str << endl;
    return 0;
}
