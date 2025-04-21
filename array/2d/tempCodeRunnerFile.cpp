#include<iostream>
using namespace std;
bool find_target(int arr[3][3],int row,int col ,int target){
    for(int i = 0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false ;
}
int main(){
    int arr[3][3]={ {1,2,3},{4,5,6},{7,8,9}
    };
    int row = 3; 
    int col = 3;
    int target ;
    cout<<"Enter the value which you want to find in the array"<<endl;
    cin>>target;
    bool result = find_target(arr,3,3,target);
    if(result)
    cout << "Target found!" << endl;
    else
    cout << "Target not found!" << endl;
    return 0 ;
}