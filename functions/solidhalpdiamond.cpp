// Solid Half diamond
#include<iostream>
using namespace std; 
int main(){
// method 1 
    int n ;
    cin>>n;
    for(int i = 0 ; i<n;i++){
        for(int j =0 ; j<=i ; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    for(int m = n-1 ; m>0;m--){
        for(int r = m ; r>0 ; r--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}