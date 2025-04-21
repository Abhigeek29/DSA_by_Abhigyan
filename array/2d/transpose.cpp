// Transpose of a matrix
#include<iostream>
using namespace std ;
void  tranpose(int arr[][3],int row , int col ){
    for(int i =0; i<row;i++){
        for(int j =i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}
void print(int arr[][3],int row , int col){
    // cout<<"The printed matrix is :"<<endl;
     for(int i = 0 ; i<row;i++){
        for(int j =0 ;j<col ;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][3]={
    {2 ,4 ,6 },{8 ,3 ,5 },{7 ,9 ,1 }
    };
    int row = 3;
    int col = 3;
    cout<<"The printed matrix is :"<<endl;
   print(arr,3,3);
   cout<<"The printed matrix after transpose is :"<<endl;
    tranpose(arr,3,3);
    print(arr,3,3);
    return 0 ;
}