// to print sum of all elements in an array
#include<iostream>
#include<vector>
using namespace std;
int sumofall(int index,vector<int>&arr){
    if(index>=arr.size()) return 0;
    int sum = arr[index];
    sum += sumofall(index+1, arr);
    

    return sum;
}
int main() {
    vector<int>arr = {1,2,3,4,5};
    int ans = sumofall(0,arr);
    cout<<ans;
    return 0;
}