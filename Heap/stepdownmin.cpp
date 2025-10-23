// creating a max heap using step down procedure for decreased time complexity
#include<iostream>
using namespace std;
void heapify(int arr[] , int index , int size){
    int smallest = index ;
    int left = 2*index+1;
    int right = 2*index +2;

    if(left<size && arr[left]<arr[smallest]){
        smallest = left;
    }
    if(right<size && arr[right]<arr[smallest]){
        smallest = right;
    }

    if(smallest!=index){
        // that means one child was greater than the parent 
        // we swap 
        swap(arr[smallest],arr[index]);
        heapify(arr,smallest,size);
    }
}
void buildmaxheap(int arr[] , int size){
    // using step down approach 
    for(int i = (size/2)-1 ; i>=0;i--){
        // step 1 heapify operation karo
        heapify(arr, i, size);
    }
}
void printheap(int arr[],int size){
    for(int i = 0 ; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int arr[]={10,3,8,9,5,13,18,14,11,70};
    buildmaxheap(arr,10);
    printheap(arr,10);
    return 0;
}