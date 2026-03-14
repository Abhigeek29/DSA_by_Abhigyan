// this is the code for sorting an array using recursion 

#include<iostream>
#include<vector>
using namespace std;
void insertion(vector<int>&arr,int size , int element){
    if(size==0 || arr[size-1]<=element){
        arr.insert(arr.begin()+size, element);
        return;
    }
    // compare and put 
    int last = arr[size-1];
    arr.pop_back();
    insertion(arr,size-1,element);
    arr.push_back(last);
}
void sorting(vector<int>&arr , int size){
    if(size==1){
        return;
    }
    int last = arr[size-1];
    sorting(arr,size-1);
    arr.pop_back();
    insertion(arr,size-1,last);
}
int main() {
    vector<int>arr = {1,0,5,2};
    int n = arr.size();
    sorting(arr,n);
    for(int i = 0 ; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}