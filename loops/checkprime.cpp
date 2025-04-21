#include<iostream>
using namespace std;
int check_prime(int n){
    if(n==0 || n==1){
        cout<<"Neither Odd nor prime"<<endl;
    }
    
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                return false;
            }
        }
    
}
int main(){
    int n ;
    cout<<"Enter the number you want to check for prime or not "<<endl;
    cin>>n;
    check_prime(n);
    if(flag==1){
        cout<<n<<" is a Prime number"<<endl;
    }
    else if(flag==0){
        cout<<n<<" is not a Prime number"<<endl;
    }
    return 0 ;
}
