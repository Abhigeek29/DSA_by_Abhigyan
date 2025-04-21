// linear Search
// Method 1 

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10] = {1,9,89,10,67,20,55,29,11,4} ;
//     int key,found = 0;
//     cout<<"Enter the key to be found"<<endl;
//     cin>>key;
//     for(int i = 0 ; i<10 ;i++){
//         if(key == arr[i]){
//             found++;
//             break;
//         }
//     }

//     if(found ==1){
//         cout<<"The key is found at the index"<<endl;
//     }
//     else{
//         cout<<"Key not found";
//     }
//     return 0 ;
// }

// Method 2 

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10] = {1,9,89,10,67,20,55,29,11,4} ;
//     int key,found = 0;
//     cout<<"Enter the key to be found"<<endl;
//     cin>>key;
//     for(int i = 0 ; i<10 ;i++){
//         if(key == arr[i]){
//             found++;
//             cout<<"The key is found at the index"<<" "<<i<<endl;
//             break;
//         }
//     }
//     if(found==0){
//         cout<<"Key was not found"<<endl;
//     }
//     return 0 ;
// }

// Method 3 - using array and functions
#include <iostream>
using namespace std;
bool linear_search(int arr[], int size , int target){
    for(int i = 0 ; i<size;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[6]={10,20,30,40,50,60};
    int size = 6;
    int target;
    cout<<"enter the value of taregt to be foun"<<endl;
    cin>>target;
    bool ans = linear_search(arr,size , target);
    if(ans == 1){
        cout<<"Key found";
    }
    else{
        cout<<"Key not found";
    }
    return 0 ;
}
