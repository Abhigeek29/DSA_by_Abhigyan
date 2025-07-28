// Implementing quicksort 
#include<iostream>
using namespace std;
void quicksort(int arr[] , int start , int end){
    while(start>=end){
        return ;
    }
    int pivot = end ; // always
    int i = start -1;
    int j = start ;

    while(j<pivot){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i],arr[pivot]); // correct place of pivot element

    // Pivot element is already sorted
    quicksort(arr, start , i-1);
    quicksort(arr,i+1 , end); 
}
int main(){
    int arr[] = {7,2,1,8,6,3,5,4};
    int size = 8;
    int start = 0 ;
    int end = size -1 ;
    cout<<"Before sorting"<<endl;
    for(int i = 0 ; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr, start , end);
    cout<<"After sorting"<<endl;
    for(int i = 0 ; i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}