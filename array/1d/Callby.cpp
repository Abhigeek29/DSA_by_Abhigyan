// Call by value 
/*This is different from the main scope n 
In the main a memory block named 'n' is assigned and a seperate memory block n is created in the function . 
Hence it is call by value */
// #include<iostream>
// using namespace std;
// int incrementby1(int n){          
//     n = n+ 1 ;
//     int* r = &n ;
//     cout<<r<<endl;
//     return 0 ;
// }
// int main(){
//     int n ;
//     cin>>n;
//     int* k = &n ;
//     cout<<"Address of n is "<<k<<endl;
//      incrementby1(n);
//     // cout<<"This address will be different : "<<result<<endl;
//     return 0 ;
// }


// Call by reference 
// This is same as from the main scope n 
#include<iostream>
using namespace std;
int incrementby1(int &n){
    n = n+ 1 ;
    int* r = &n ;
    cout<<r<<endl;
    return 0 ;
}
int main(){
    int n ;
    cin>>n;
    int* k = &n ;
    cout<<"Address of n is "<<k<<endl;
     incrementby1(n);
    // cout<<"This address will be different : "<<result<<endl;
    return 0 ;
}