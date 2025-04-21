// Numerical palindrome equilateral half pyramid 
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the size of pyramid"<<endl;
    cin>>n;
    int k = n;
    for(int row = 0 ; row<n;row++){
        int c = 1;
        for(int col = 0 ; col<k ; col++){
            if(col<n-row-1){
                cout<<" ";
            }
            else if (col<=n-1){
                cout<<c;
                c++;
            }
            else{
                cout<<c-2;
                c--;
            }
        }
        k++;
        cout<<endl;
    }
    return 0 ;
}