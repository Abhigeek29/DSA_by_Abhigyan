#include<iostream>
using namespace std;
int print_prime_1ton(int n){
    if(n==0 || n==1){
        return false;
    }
    for(int i = 2; i<=n/2; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n ;
    cin>>n;
    for(int i =2 ; i<=n ; i++){
        bool prime = print_prime_1ton(i);
        if(prime){
            cout<<i<<" ";
        }
    }
    
}