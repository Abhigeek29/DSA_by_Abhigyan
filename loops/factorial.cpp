#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n ==1){
        return 1;
    }
    if(n>1){
        return n*factorial(n-1);
    }
}
int main(){
    int n ;
    cout<<"Enter an Integer number"<<endl;
    cin>>n;
    int result = factorial(n);
    cout<<result<<endl;
    
    return 0 ;
}