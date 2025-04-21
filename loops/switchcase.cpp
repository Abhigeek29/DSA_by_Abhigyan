#include<iostream>
using namespace std;
int main(){
    int a , b, op, ans;
    cout<<"Enter two values"<<endl;
    cin>>a>>b;
    cout<<"enter the operation you need to perform"<<endl;
    cin>>op;

    switch(op){
        case 0:
            cout<<"The addition of the two number is "<<endl;
            ans = a +b ;
            cout<<ans<<endl;
            break;
        case 1:
            cout<<"The substraction of the two number is "<<endl;
            ans = a-b ;
            cout<<ans<<endl;   
            break;
        case 2:
            cout<<"The multiplication of the two number is "<<endl;
            ans = a*b ;
            cout<<ans<<endl; 
            break;
        case 3:
            cout<<"The division of the two number is "<<endl;
            ans = a/b ;
            cout<<ans<<endl;
            break;
        case 4:
            cout<<"Please enter correct value"<<endl;
            return 0;

    }
    
}