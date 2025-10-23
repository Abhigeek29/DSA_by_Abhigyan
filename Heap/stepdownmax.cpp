// creating a max heap using step down procedure for decreased time complexity
#include<iostream>
using namespace std;
void heapify(int arr[] , int index , int size){
    int largest = index ;
    int left = 2*index+1;
    int right = 2*index +2;

    if(left<size && arr[left]>arr[largest]){
        largest = left;
    }
    if(right<size && arr[right]>arr[largest]){
        largest = right;
    }

    if(largest!=index){
        // that means one child was greater than the parent 
        // we swap 
        swap(arr[largest],arr[index]);
        heapify(arr,largest,size);
    }
}
void buildmaxheap(int arr[] , int size){
    // using step down approach 
    for(int i = (size/2)-1 ; i>=0;i--){
        // step 1 heapify operation karo
        heapify(arr, i, size);
    }
}

// 70 14 18 11 5 13 8 9 10 3
void sortheap(int arr[],int size){
    // writing down the max heap function
    // step1 : replace first with last 
    // decrease the size by 1 
    // apply heapify algorithm
    for(int i = size-1 ; i>0;i--){
        swap(arr[i],arr[0]);
        heapify(arr,0,i);
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
    sortheap(arr,10);
    printheap(arr,10);
    return 0;
}