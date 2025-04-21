// Using INT_MAX / INT_MIN functions
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){ 
//     int minimum = INT_MAX;
//     int arr[6]={12,56,1,5,10,99};
//     for(int i = 0 ; i<6 ; i++){
//         if(arr[i]<minimum){
//             minimum = arr[i];
//         }
//     }
//     cout<<"The minimum no. in the array is :"<<" "<<minimum<<endl;
//     return 0 ;
// }


// Method 2 using Min and max functions
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){ 
//     int minimum = INT_MAX;
//     int arr[6]={12,56,1,5,0,99}; 
//     for(int i = 0 ; i<6 ; i++){
//         minimum = min(arr[i],minimum);
//     }
//     cout<<"The minimum no. in the array is :"<<" "<<minimum<<endl;
//     return 0 ;
// }


// Method 3 using temp variable
#include<iostream>
using namespace std ;
int minimum_integer(int arr[], int size){
    int temp = arr[0];
    for(int i = 0 ; i<size ; i++){
        if(temp > arr[i]){
            temp = arr[i];
        }
    }
    return temp;
}
int main(){
    int arr[6]={10,45,30,18,900,27};
    int size = 6;
    int smallest = minimum_integer(arr , 6);
    cout<<"The smallest number in the array is :"<<" "<<smallest<<endl;
    return 0 ;
}