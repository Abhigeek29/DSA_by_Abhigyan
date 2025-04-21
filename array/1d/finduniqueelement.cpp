#include<iostream>
using namespace std;
int findunique(int arr[],int size){
    int ans = 0; // ZERO KO KISI ke bhi saath xor karenge toh zero ayega
    for(int i = 0 ; i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[13] = {2,2,4,5,4,8,8,5,11,13,24,13,24} ;
    int size = 13;
    int result = findunique(arr,size);
    cout<<"The unique element is:"<<result<<endl;
  return 0 ;
}