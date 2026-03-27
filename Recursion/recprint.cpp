/*
Problem 2:
Write a recursive function to print an array in the following order. [0] [n-1] [1] [n-2] ......... ......... [(n-1)/2] [n/2]
Input:
5
1 5 7 8 9
Output:
1 9
5 8
7 7
*/
#include <iostream>
#include<vector>
using namespace std;
void rev(vector<int>&arr,int start,int end){
    //base case 
    if(start>end)return;
    if(start==end){
        cout<<arr[start]<<" "<<arr[end];
        return;
    }
    
    int ele1 = arr[start];
    int ele2 = arr[end];
    cout<<ele1<<" "<<ele2<<endl;
    rev(arr,start+1,end-1);
    
}
int main() {
    vector<int> arr = {10,20,30,40,50,60};
    rev(arr,0,arr.size()-1);
    return 0;
}