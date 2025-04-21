#include <iostream>
using namespace std ;
int main(){
// Defining array size
    int arr[10];
    // cout<<"Enter the value in the array"<<endl;
// Taking inputs
    for(int i = 0 ; i<10;i++){
        cout<<"Write the Value at the index "<<" "<<i<<" ";
        cin>>arr[i];
        cout<<endl;
    }
// DOubling the Array
    for(int i = 0 ; i<10 ; i++){
        arr[i]*=2;
    }
// Printing the array
    for(int i = 0 ; i<10 ; i++){
        cout<<arr[i]<<" ";
    }

    return 0 ;
}