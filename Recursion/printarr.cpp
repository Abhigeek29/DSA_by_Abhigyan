// to print elements of an array 
#include<iostream>
#include<vector>
using namespace std;

void printarr(int index , vector<int>&arr){
    if(index>arr.size()-1){
        return ;
    }
    cout<<arr[index]<<" ";
    printarr(index+1,arr);
}
int main() {
    vector<int>arry = {1,2,3,4};
    printarr(0,arry);
    return 0;
}