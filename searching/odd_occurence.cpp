// Code odd occuring elements by self 
#include<iostream>
using namespace std ;
int odd_occuring_elements(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start +(end-start)/2;
    while(start<=end){
        if(start==end){ //single case
            return arr[end]; 
        }
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                start = mid+2;
            }
            else{
                end = mid ; 
            }
        }
        else{
            if(arr[mid]==arr[mid-1]){
                start = mid +1;
            }
            else{
                end = mid -1 ;
            }
        }
        mid = start +(end-start)/2;
    }
    return -1;
}
int main(){
    int arr[] = {10,10,2,2,5,5,5,5,20,20,11,11,10};
    int n = 15 ;
    int ans = odd_occuring_elements(arr,n);
    if(ans==-1){
        cout<<"No occuring element"<<endl;
    }
    else{
        cout<<"odd occuring element is "<<ans;
    }
    return 0;
}