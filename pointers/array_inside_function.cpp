// Array is passed by reference inside a function 
// revise this code

#include<iostream>
using namespace std;
void solve(int *arr,int size){
    cout<<"the value of arr inside the solve function is "<< arr<<endl;
    cout<<"the value of &arr inside the solve function is "<< &arr<<endl;
}
int main(){
    int arr[3] = {1,2,3};
    cout<<"the value of arr inside main function is "<<arr<<endl;
    cout<<"the value of &arr inside main function is "<<&arr<<endl;
    solve(arr,3);
    return 0;
}
