// selection sort 
#include<iostream>
using namespace std ;
void selection_sort(int arr[],int size){
    for(int i = 0 ; i<size-1;i++){
        int mini = i;
        for(int j =i ; j<size;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}
int main(){
    int arr[] = {13,46,24,52,20,9};
    int n = sizeof(arr)/sizeof(int);
    selection_sort(arr,n);
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}