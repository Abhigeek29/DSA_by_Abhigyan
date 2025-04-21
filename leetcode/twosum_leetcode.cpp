#include<iostream>
using namespace std;
void twosum(int arr[],int size,int target){
    for(int i =0 ; i<size ; i++){
        for(int j = i+1 ; j<size ; j++){
            if(arr[i]+arr[j]==target){
                cout<<i<<","<<j<<endl;
            }
        }
    }

}
int main(){
    int nums[3]= {3,2,4};
    int size = 3;
    int target ;
    cin>>target;
    twosum(nums,size,target);
  return 0 ;
}