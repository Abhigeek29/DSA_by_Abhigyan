// dequeue
#include<iostream>
using namespace std;

class Deque{
public:
    int* arr;
    int size;
    int front ;
    int rear;

    Deque(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear =-1;
    }

    void push_back(int val){
        // overflow
        if(rear==size-1){
            cout<<"Overflow hogaya"<<endl;
        }
        // empty
        else if(front ==-1 && rear ==-1){
            front++;
            rear++;
            arr[rear] = val;
        }
        // normal
        else{
            rear++;
            arr[rear] = val;
        }
    }
    void push_front(int val){
        // overflow
        
    }
};
int main() {
    return 0;
}