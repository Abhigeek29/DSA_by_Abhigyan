// Two pointer Approach 
#include<iostream>
using namespace std; 
void Sort_0and1(int arr[],int size){
    int left = 0;
    int right = size -1;
    int temp;
    // Sorting 0's and 1's
    while(left<right){
        if(arr[left]==1){
            swap(arr[left],arr[right]);
            right--;
        }
        else{
            left++;
        }
    }
    // Printing the new array
    for(int i =0; i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main (){
    int arr[]={0,1,1,0,1,1,0,0,0,0,0,0,0,0,1,1};
    int size = 16;
    // Printing old array
    for(int i =0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Sort_0and1(arr,size);
    return 0 ;
}