// Swappping in 3 different types
#include<iostream>
using namespace std;
void temp_swap(int a , int b){
    int temp ;
    temp = a;
    a=b;
    b=temp;
    cout<<"a is :"<<" "<<a<<endl;
    cout<<"b is :"<<" "<<b<<endl;
}
void Xor_swap(int  a , int b ){
    a = a^b;
    b = a^b;
    a=a^b;
    cout<<"a is :"<<" "<<a<<endl;
    cout<<"b is :"<<" "<<b<<endl;
}
void operating_swap(int a , int b){
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"a is :"<<" "<<a<<endl;
    cout<<"b is :"<<" "<<b<<endl;
}
void muldiv_swap(int a , int b){
    a = a * b;
    b = a / b;
    a = a / b;
    cout<<"a is :"<<" "<<a<<endl;
    cout<<"b is :"<<" "<<b<<endl;
}
int main(){
    int a = 100 ;
    int b = 51;
    temp_swap(a,b);
    Xor_swap(a,b);
    operating_swap(a,b);
    muldiv_swap(a,b);
    return 0 ;
}