#include<iostream>
using namespace std;
int main(){
    // int arr[8]={0,1,1,1,0,1,1,0};
    int n;
    cout<<"Enter the size of array you want"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Please enter either 0 or 1 in the array"<<endl;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int zero_count = 0;
    int one_count = 0;

    for(int i = 0 ; i<n;i++){
        if(arr[i]==0){
            zero_count+=1;
        }
        else{
            one_count+=1;
        }
    }

    cout<<"The number of Zeroes are :"<<" "<<zero_count<<endl;
    cout<<"The number of Ones are :"<<" "<<one_count<<endl;
    return 0 ;
}