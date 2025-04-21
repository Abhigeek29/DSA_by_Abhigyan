#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
    // int A = 48;
    // double B = 34.5;
    // cout<<typeid(A).name()<<endl;
    // cout<<typeid(B).name()<<endl;

// Implicit type conversion
    // int num = 5;
    // float num2 = 5.6;
    // float result = num + num2;
    // int sum = result ;
    // cout<<result<<" "<<sum;

// Explicit Type conversion
    int num = 5;
    float num2 = 5.6;
    float result = num + int(num2);
    cout<<result;
}