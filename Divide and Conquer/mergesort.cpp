#include<iostream>
using namespace std;

void sortarray(){

}

void mergesort(int arr[],int s , int e){
    // base case 
    if(s>=e){
        return ;
    }
    
    // mid generation
    int mid = s + (e-s)/2;

    // left ki call 
    mergesort(arr,s , mid);

    // right ki call
    mergesort(arr,mid+1,e);


    // sort the left and right array

    sortarray();

}

int main() {
    return 0;
}