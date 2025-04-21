// We are performing searching in a nearly sorted array 
// What is a nearly sorted array ; if in a sorted array an element exists in ith index then
// In a nearly sorted array it can be present at 3 different indices  - (i-1)th,(ith),(i+1)th
#include<iostream>
using namespace std;
int nearlysortedarray(int arr[],int n , int target){
    int s = 0 ;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if (mid-1 >= 0 && arr[mid-1]==target){
            return mid-1;
        }
        else if(mid +1 < n && arr[mid+1]==target){
            return mid+1;
        }
        else if(target> arr[mid]){
            s = mid +2; // +2 isiliye kara because check hochuka hai mid +1 wala element toh wapas se kyu karna 
            // +1 karke bhi answer nikalta but +2 karke repititive code ko remove kia hai 
        }
        else{
            e = mid -2; // Similar logic idhar bhi applied hai
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int main(){
    int arr[]={20,10,30,50,40,70,60};
    int n = 7;
    int target = 20;
    // cin>>target;
    int ans = nearlysortedarray(arr, n , target);
    if(ans==-1){
        cout<<"Element not found "<<endl;
    }
    else {
        cout<<"Element is found at index  :"<<" "<<ans<<endl;
    }
    return 0;
}