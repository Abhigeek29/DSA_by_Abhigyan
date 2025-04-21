//sum of all no. upto n
#include<iostream>
using namespace std;
int result=0;
int sum_of_all_upto_n(int n){
    for(int i = 0; i<=n ;i++){
        result= result + i;
    }

    cout<<result;
    return 0;
}

int main(){
    cout<<"Enter the number till which you want to calculate result"<<endl;
    int n ;
    cin>>n;
    cout<<"The sum of All number is :"<<endl;
    sum_of_all_upto_n(n);
}