// Length of integer 
#include<iostream>
using namespace std;
int count_length(int n){
    int count = 0;
    n = abs(n); // For handling negative integers 
    if (n==0){
        return 1 ;
    }
    else{
        while(n>0){
            n/=10;
            count++;
        }
    }
    return count;
}
int main(){
    int n ;
    cout<<"enter an integer value "<<endl;
    cin>>n;
    cout<<"the length of the integer is :"<<" "<< count_length(n)<<endl;
    return 0;
}