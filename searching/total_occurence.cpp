#include<iostream>
using namespace std ;
int find_first_occurence(int arr[],int size,int target){
    int start = 0 ;
    int end = size-1;
    int ans = -1;
    int mid;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==target){
            ans = mid ;
            end = mid-1;
        }
        else if (target<arr[mid]){
              end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans ;
}
int find_last_occurence(int arr[],int size,int target){
    int start = 0 ;
    int end = size-1;
    int ans = -1;
    int mid;
    while(start<=end){
        mid=start + (end - start)/2;
        if(arr[mid]==target){
            ans = mid ;
            start = mid+1;
        }
        else if (target<arr[mid]){
              end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans ;
}
int find_total_occurence(int arr[],int size,int target){
    int first = find_first_occurence(arr,size,target);
    int last = find_last_occurence(arr,size,target);
    int sum = last - first +1;
    return sum;
}
int main(){
    int arr[10]={10,20,20,20,20,30,30,80,90,91};
    int size = 10;
    int target;
    cin>>target ;
    int value = find_total_occurence(arr,size,target);
    if(value==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"The total occurence of the element is : "<<" "<<value<<endl;
    }
    return 0 ;
}