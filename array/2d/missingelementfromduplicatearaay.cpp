// Find the missing element from an array containing duplicate numbers
#include<iostream>
using namespace std ;
int find_missing_from_duplicate(int arr[],int size){
    for(int i =0 ; i<size;i++){
        int getelem = abs(arr[i]);
        if(arr[getelem -1] >0){
            arr[getelem-1] *= -1;
        }
    }
    for(int i = 0 ; i<size;i++){
        if(arr[i]>0){
            cout<<i+1<<" ";
        }
    }
}
int main(){
    int arr[5] = {1,3,5,3,4};
    int n = sizeof(arr)/sizeof(int);
    find_missing_from_duplicate(arr,n);
    return 0 ;
}