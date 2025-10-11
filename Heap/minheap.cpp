#include <iostream>
using namespace std;

class Minheap {
public:
    int *arr;
    int size;        // current size
    int total_size;  // capacity

    Minheap(int n) {
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    void insert(int val) {
        if(size == total_size) {
            cout << "Heap Overflow" << endl;
            return;
        }
        arr[size] = val;
        int index = size;
        size++;

        // Percolate up
        while(index > 0 && arr[(index - 1)/2] > arr[index]) {
            swap(arr[index], arr[(index - 1)/2]);
            index = (index - 1)/2;
        }
    }

    void print() {
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void heapify(int index) {
        int smallest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if(left < size && arr[left] < arr[smallest])
            smallest = left;

        if(right < size && arr[right] < arr[smallest])
            smallest = right;

        if(smallest != index) {
            swap(arr[index], arr[smallest]);
            heapify(smallest);
        }
    }

    void Delete() {
        if(size == 0) {
            cout << "Heap Underflow" << endl;
            return;
        }
        cout << "Deleted element: " << arr[0] << endl;
        arr[0] = arr[size - 1];
        size--;
        if(size > 0)
            heapify(0);
    }

    ~Minheap() {
        delete[] arr;
    }
};

int main() {
    Minheap h1(10);
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
    return 0;
}
