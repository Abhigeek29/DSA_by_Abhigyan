// Inverted numerical hollow half pyramid
#include<iostream>
using namespace std;

int main() {
    // int n;
    // cin >> n;
// Method 1
    // for (int row = 0; row < n; row++) {
    //     for (int col = n; col > row; col--) {
    //         // Print number at the boundary or last row
    //         if (row == 0 || col == n || col == row + 1)
    //             cout << n - col + row + 1<< " ";
    //         else
    //             cout << "  "; // Print space inside the hollow pattern
    //     }
    //     cout << endl;
    // }


//  Method 2
    int n ;
    cin>>n;
    for(int i = 0 ; i<n ;i++){
        for(int j = i+1 ; j<=n ; j++){
            if(i==0 || j ==i+1 || j == n){
            cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}

