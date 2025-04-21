#include<iostream>
using namespace std ;
int main(){
    int arr[7]={23,-7,12,-10,-11,40,60};
    int size = 7;
    int j = 0;
    for(int i = 0; i<size;i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int r = 0; r<size;r++){
        cout<<arr[r]<<" ";
    }
    return 0 ;
}