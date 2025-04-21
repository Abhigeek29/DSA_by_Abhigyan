// Reversing a digit 
#include<iostream>
#include<limits.h>
using namespace std ;
int reverse_number(int &number){
    int new_num=0;
    while(number!=0){
        if(new_num>INT_MAX/10 || new_num<INT_MIN/10) return 0 ;
        // int last_digit = number%10;
        new_num = new_num*10 +  number%10;
        number/=10;
    }
    return new_num;
}
int main(){
    int number ;
    cin>>number;
    cout<<"The number before reversing is : "<<number<<endl;
    int number_reversed = reverse_number(number);
    cout<<"The number after reversing is : "<<number_reversed<<endl;
    return 0 ;
}