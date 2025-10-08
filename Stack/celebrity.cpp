// implementing celebrity problem from scratch
/* A celebrity is a person who knows no one except himself 
everyone who knows someone else except themselves is a celebrity 
you need to return if in a party a celebrity exists or not 

mat[i][j] = 1 , means i knows j 
mat[i][j] = 0, means i does not know j 
*/
#include <iostream>
#include <vector>
#include<stack>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));

    cout << "Enter values for non-diagonal elements (0 or 1):\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                mat[i][j] = 1; // diagonal = 1
            } else {
                int val;
                do {
                    cout << "Enter value for mat[" << i << "][" << j << "] (0/1): ";
                    cin >> val;
                } while (val != 0 && val != 1); // force only 0 or 1
                mat[i][j] = val;
            }
        }
    }

    cout << "\nFinal Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    stack<int>st;
    // step 1 : push all the people onto stack 
    for(int i = 0 ; i<mat.size();i++){
        st.push(i);
    }
    while(st.size()!=1){
        int a = st.top(); st.pop();
        int b = st.top(); st.pop();

        if(mat[a][b]){
            // a is not the celebrity, b might be 
            st.push(b);
        }
        else{
            // b is not the celebrity, a might be 
            st.push(a);
        }
    }
    int potential_celeb = st.top(); st.pop();
    // for a celebrity whole row is zero except himself
    for(int i = 0 ; i<mat.size();i++){
        if(mat[potential_celeb][i]==1 && i!=potential_celeb){
            return -1 ;
        }
    }
    // for a celebrity in a column every number should be 1 
    for(int i = 0 ; i<mat.size();i++){
        if( i!=potential_celeb && mat[i][potential_celeb]==0){
            return -1;
        }
    }
    return potential_celeb;
    return 0;
}
