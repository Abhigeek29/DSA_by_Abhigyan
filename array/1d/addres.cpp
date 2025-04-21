// We will look at the examples Printing variable and array addresses
#include<iostream>
using namespace std ;
int main(){
    int a = 6;
    int arr[10];
    cout<<"Address of the variable is : "<<" "<<&a<<endl;
    cout<<"Address of the array is : "<<" "<<&arr<<endl;
    cout<<"Address of the array is : "<<" "<<arr<<endl;
    cout<<"size of the variable is : "<<" "<<sizeof(a)<<endl;
    cout<<"size of the array is : "<<" "<<sizeof(arr)<<endl;
    return 0;
}