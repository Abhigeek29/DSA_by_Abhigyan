#include<iostream>
using namespace std;
int get_quotient(int dividend , int divisor){
    int start = 1;
    int end = dividend;
    int mid = start + (end- start)/2;
    int ans =-1;
    while(start<=end){
        if(mid*divisor == dividend){
            return mid ;
        }
        else if(mid*divisor <= dividend){
            ans = mid ;
            start = mid+1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end- start)/2;
    }
    return ans;
}
int main(){
    int dividend = 34;
    int divisor = -7 ;
    int result = get_quotient(abs(dividend),abs(divisor));
    if((dividend<0 && divisor >0 )|| (dividend>0 && divisor<0)){
        result = 0-result;
    }
    cout<<result;
    return 0 ;
}