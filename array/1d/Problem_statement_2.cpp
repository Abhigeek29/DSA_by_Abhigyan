// make an array of size 5 , take user inputs , return sum of the vlues at of indices
#include <iostream>
using namespace std ;
int main(){
// Declaring array of size 5
    int arr[5] , sum = 0;
    for(int i = 0 ; i<5 ; i++){
        cout<<"Write the Value at the index "<<" "<<i<<" ";
        cin>>arr[i];
        cout<<endl;
    }

    for(int i = 0 ; i<5 ; i++){
        sum += arr[i];
    }
    cout<<"The sum the values at array is :"<<" "<<sum<<endl;
    return 0 ;
}