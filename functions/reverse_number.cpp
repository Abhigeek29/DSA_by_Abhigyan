// Reversing an integer
#include<iostream>
using namespace std;
int reverse_integer(int num){
    int rev_num = 0;
    num = abs(num);
    if(num==0){
        return 0 ;
    }
    while(num>0){
        rev_num = num%10 + 10 * rev_num;
        num /= 10;
    }
    return rev_num;
}
int main(){
    int n ;
    cout<<"Enter the number you want to calculate the reverse of"<<endl;
    cin>>n;
    cout<<"the reverse of the number is :"<<" "<<reverse_integer(n)<<endl;
    return 0;
}