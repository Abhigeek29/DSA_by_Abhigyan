#include<iostream>
using namespace std;
int main (){
    int num ;
    cout<<"give an integer input"<<endl;
    cin>>num;
    if(num%2==0){
        cout<<num<<" is Even No."<<endl;
    }
    else{
        cout<<num<<" is Odd No."<<endl;
    }
    return 0 ;
}