#include <iostream>
using namespace std;

pair<int,int> find_target(int arr[3][3], int row, int col, int target) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == target) {
                return {i, j};  // return row, col when found
            }
        }
    }
    return {-1, -1};  // not found
}

int main() {
    int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int row = 3; 
    int col = 3;
    int target;

    cout << "Enter the value which you want to find in the array: ";
    cin >> target;

    pair<int,int> result = find_target(arr, row, col, target);

    if (result.first != -1) {
        cout << "Target found at row " << result.first 
             << " and column " << result.second << endl;
    } else {
        cout << "Target not found!" << endl;
    }

    return 0;
}
