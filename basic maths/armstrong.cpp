#include<iostream>
#include<cmath>
using namespace std ;
bool armstrong_number(int n ){
    int original_num = n;
    int sum = 0;
    int count = int(log10(n)+1);
    while(n!=0){
        int last = n%10;
        sum = pow(last,count)+ sum ;  // pow(last,3) can also be used - omitted it becuase it was not working on the online compiler
        n/=10;
    }
    if(sum==original_num) return true ;
    return false;
}
int main(){
    int n ;
    cout<<"enter integer input"<<endl;
    cin>>n;
    int result = armstrong_number(n);
    if(result == true){
        cout<<n<<" "<<"Is an armstrong number"<<endl;
    }
    else{
        cout<<"NO it is not an armstrong number"<<endl;
    }
    return 0 ;
}