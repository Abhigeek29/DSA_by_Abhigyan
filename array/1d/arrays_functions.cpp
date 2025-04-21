#include<iostream>
using namespace std;
void print_arr(int arr[],int size){
    for(int i =0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5] = {1,2,3};
    int size = 3;
    print_arr(arr, size);
    return 0 ;
}