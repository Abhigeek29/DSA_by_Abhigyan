#include<iostream>
using namespace std;
// int is_even(int n){
//     if(n%2==0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

int bitwise_even(int n){
    if((n&1) == 0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n ;
    cout<<"Enter an integer"<<endl;
    cin>>n;
    // bool check_even = is_even(n);
    bool check_even = bitwise_even(n);
    if(check_even){
        cout<<n<<"The number is even number"<<endl;
    }
    else{
        cout<<n<<" "<<"The number is odd number"<<endl;
    }
    return 0;
}
