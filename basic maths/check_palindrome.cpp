#include<iostream>
#include<cmath>
using namespace std ;
bool check_palindrome(int n){
    int original_num = n;
    int rev_num = 0 ;
    while(n!=0){
        rev_num = rev_num*10 + n%10;
        n/=10;
    }
    if(rev_num == original_num){
        return true;
    }else{
        return false;    
    }
}
int main(){
    int n ; 
    cin>>n;
    bool result = check_palindrome(n);
    cout<<result ;
    return 0 ;
}