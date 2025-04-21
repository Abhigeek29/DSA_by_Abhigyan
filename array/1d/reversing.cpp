// Reversing an Array with swap function
// #include<iostream>
// using namespace std ;
// int main(){
//     int arr[5]= {10,20,30,40,50};
//     int left = 0; 
//     int right = 4;
//     for(int i = 0 ; i<5 ; i++){
//         if(left>right){
//             break;
//         }
//         else{
//             swap(arr[left],arr[right]);
//             left++ ;
//             right--;
//         }
//     }
// // Printing an array
//     for(int i = 0 ; i<5 ; i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0 ;
// }

// Revering an array with temp 
#include<iostream>
using namespace std;
void reverse_arr(int arr[],int size){
    int left = 0 ;
    int right = size -1 ;
    int temp ;

    while(left<=right){
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
// Printing an array
    for(int i = 0 ; i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]= {10,20,30,40,50,60};
    int size = 6;
    reverse_arr(arr , 6);
    return 0;
}