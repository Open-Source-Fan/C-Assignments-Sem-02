//print a spiral pattern of abers for a given size n
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number n: ";
    cin >> n;

    int matrix[n][n];  
    int a = 1; 

    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (a <= n * n) {
        for (int i = left; i <= right; i++) matrix[top][i] = a++;
        top++;

        for (int i = top; i <= bottom; i++) matrix[i][right] = a++;
        right--;

        for (int i = right; i >= left; i--) matrix[bottom][i] = a++;
        bottom--;

        for (int i = bottom; i >= top; i--) matrix[i][left] = a++;
        left++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
