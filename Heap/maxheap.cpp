// done using step up approach 
#include<iostream>
using namespace std;

class MaxHeap{
public:
    int *arr;
    int size ; // current no. of elements present in the heap 
    int total_size ; // total size of the heap

    MaxHeap(int n){
        arr = new int[n];
        size = 0;
        total_size = n;
    }
    void insert(int val){
        // heap size available 
        if(size==total_size){
            cout<<"Heap Overflow"<<endl;
            return;
        }

        // insert kardia
        arr[size] = val;
        int index = size;
        size++;

        // now put in correct position 
        while(index>0 && arr[(index-1)/2]<arr[index]){
            swap(arr[index],arr[(index-1)/2]);
            index = (index-1)/2;
        }
        cout<<arr[index]<<" is now inserted into the heap"<<endl;
    }
    void print(){
        for(int i = 0 ; i<size;i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }
    void Heapify(int index){
        int largest = index;
        int left = 2*index +1 ;
        int right = 2*index +2 ;

        // comparison between parent , left and right child 
        if(left<size && arr[left]>arr[largest]){
            largest = left;
        }
        if(right < size && arr[largest]<arr[right]){
            largest = right;
        }

        // swapping part 
        if(largest!=index){
            // that means it has been replaced 
            swap(arr[index],arr[largest]);
            Heapify(largest);
        }
    }

    void Delete(){
        //base condition 
        if(size==0){
            cout<<"Heap underflow"<<endl;
            return;
        }
        int remove = arr[0];
        cout<<"The largest element from the heap is deleted"<<remove<<endl;
        arr[0] = arr[size-1];
        size--;

        if(size==0) return ;
        Heapify(0);
    }
    // new keyword used , hence to prevent memory leak 
    ~MaxHeap() {
    delete[] arr;
    }

};
int main() {
    MaxHeap h1(10);
    h1.insert(4);
    h1.insert(20);
    h1.insert(8);
    h1.insert(10);
    h1.insert(19099);
    h1.print();
    h1.insert(109990);
    h1.insert(11);
    h1.insert(190);
    h1.insert(14);
    h1.Delete();
    h1.print();
    h1.insert(83);
    h1.print();
    h1.insert(1000000);
    h1.Delete();
    h1.print();
    h1.Delete();
    h1.print();
    h1.Delete();
    h1.print();
    h1.Delete();
    h1.print();
    h1.Delete();
    h1.print();
    h1.Delete();
    h1.print();
    h1.Delete();
    h1.print();
    h1.Delete();
    h1.print();
    h1.Delete();
    h1.print();
    h1.Delete();
    h1.print();
    h1.Delete();
    h1.print();
    h1.Delete();
    h1.print();
    h1.Delete();
    h1.print();
    h1.Delete();
    h1.print();
    h1.Delete();
    h1.print();
    return 0;
}