// decimal to binary method 1 
// #include<iostream>
// #include<cmath>
// using namespace std;
// int decimaltobinary(int n){
//     int binary = 0;
//     int i =0;
//     while(n>0){
//     int bit = n%2 ;
//     binary = bit*pow(10,i++) + binary;
//     n = n/2 ;
//     }
//     return binary;
// }

// int main(){
//     int n;
//     cout<<"Enter the number you want to calculate the binary for :"<<endl;
//     cin>>n;
//     int result = decimaltobinary(n);
//     cout<<"The binary of the number is : "<<" "<<result<<endl;
//     return 0;
// }

// Decimal to binary method 2 
#include<iostream>
#include<cmath>
using namespace std; 
int decimaltobinary_Method2(int n){
    int binary =0;
    int i = 0;
    while(n>0){
        int bit =(n&1);
        binary = bit*pow(10 , i++) + binary;
        n = n>>1;
    }
    return binary ;
}
int main(){
    int n ;
    cout<<"Enter the number you want to calculate the binary for : "<<endl;
    cin>>n;
    int result = decimaltobinary_Method2(n);
    cout<<result<<endl;
}