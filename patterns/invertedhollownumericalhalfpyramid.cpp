// Inverted numerical hollow half pyramid
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 0; row < n; row++) {
        for (int col = n; col > row; col--) {
            // Print number at the boundary or last row
            if (row == 0 || col == n || col == row + 1)
                cout << n - col + row + 1<< " ";
            else
                cout << "  "; // Print space inside the hollow pattern
        }
        cout << endl;
    }
    return 0;
}

