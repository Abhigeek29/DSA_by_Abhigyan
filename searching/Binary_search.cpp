#include<iostream>
using namespace std;
int binary_search(int arr[], int size , int target){
    int start = 0;
    int end = size-1;
    int mid = (start +end)/2; // Integer overflow possibility
    // Instead we can write  mid = s + (e-s)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(target<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = (start +end)/2;
    }
    return -1;
}
int main(){
    int arr[8] = {10,20,30,40,50,60,70,80};
    int size = 8;
    int target ;
    cout<<"Enter the value you want to find in the array"<<endl;
    cin>>target;
    int ans = binary_search(arr,size,target);
    if(ans==-1){
        cout<<"The element is not present in the array"<<endl;
    }
    else{
        cout<<"The element is present in the index: "<<" "<< ans<<endl;
    }
    return 0;
}