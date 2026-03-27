// reversing an array using recursion
#include <iostream>
#include<vector>
using namespace std;
void rev(vector<int>&arr,int index){
    //base case 
    if(index<0){
        return;
    }
    int ele = arr[index];
    // arr.pop_back();
    cout<<ele<<" ";
    rev(arr,index-1);
    
}
int main() {
    vector<int> arr = {10,20,30,40};
    rev(arr,arr.size()-1);
    return 0;
}