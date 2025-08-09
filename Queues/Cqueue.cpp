// Implementing circular queue
#include<iostream>
using namespace std;

class Cqueue{
public:
    int* arr;
    int size;
    int  front;
    int rear;

    Cqueue(int size){
        this->size = size;
        arr = new int[size];
        front= -1;
        rear=-1;
    }
    void push(int val){
        // overflow case - special focus
        if((front==0 && rear == size-1) || (rear == front-1)){
            cout<<"Queue overflow cannot insert"<<endl;
        }
        // empty case
        else if(front == -1 && rear ==-1){
            front++;
            rear++;
            arr[rear] = val;
        }
        // circular case
        else if(front!=0 && rear==size-1){
            rear = 0;
            arr[rear] = val;
        }
        // normal case
        else{
            rear++;
            arr[rear] = val;
        }
    }
    void pop(){
        // underflow 
        if(front==-1 && rear==-1){
            cout<<"Underflow condition"<<endl;
        }
        // single element
        else if(front==rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        // circular case
        else if(front==size-1){
            arr[front] = -1;
            front = 0;
        }
        else{
            arr[front] =-1;
            front++;
        }
    }
    void print(){
        cout<<"front : " << front <<" rear : "<<rear<<endl;
        for(int i = 0 ;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main() {
    Cqueue q(5);
    q.push(10);
    q.print();
    q.push(20);
    q.print();
    q.push(30);
    q.print();
    q.push(40);
    q.print();
    q.push(50);
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();
    q.push(100);
    q.print();
    q.push(110);
    q.print();
    q.push(120);
    q.print();
    q.push(130);
    q.print();
    return 0;
}