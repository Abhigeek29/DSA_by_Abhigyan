#include<iostream>
#include<string.h>
using namespace std;
int main() {
    int n ; 
    cin>>n;
    string res ="";
    while(n>0){
        if(n%2==1){
            res+="1";
        }
        else if(n%2==0){
            res+="0";
        }
        n/=2;
    }
    int left = 0;
    int right= res.size()-1;
    while(left<=right){
        swap(res[left],res[right]);
        left++;
        right--;
    }
    cout<<"The binary output of the decimal number is "<<res;
    return 0;
}