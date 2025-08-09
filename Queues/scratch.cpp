// implementing queue from scratch using cpp 
// in queue push is from rear 
// pop is from front
#include<iostream>
using namespace std;
class Queue{
public:
    int *arr ;
    int size;
    int rear;
    int front;

    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int val){
        if(rear==size-1){
            cout<<"Overflow"<<endl;
            return ;
        }
        else if(rear == -1 && front==-1){
                front++;
                rear++;
                arr[rear] = val;
        }
        else{
            rear++;
            arr[rear] = val;
        }
    }

    void pop(){
        if(rear==-1 && front==-1){
            cout<<"Underflow"<<endl;
        }
        else if(rear==front){
            arr[front] = -1;
            rear = -1;
            front=-1;
        }
        else{
            front++;
        }
    }
    bool isempty(){
        if(front==-1 && rear==-1){
            return true;
        }
        else{
            return false;
        }
    }
    int getsize(){
        return rear-front+1;
    }
    int getfront(){
        if(front==-1){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }
    int getrear(){
        if(rear==-1){
            cout<<"queue is empty"<<endl;
            return -1;
        }
       return arr[rear];
    }
    void print(){
        cout<<"Printing the Queue"<<endl;
        for(int i = 0 ; i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main() {
    Queue q(8);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);

    q.print();
    cout<< q.getfront()<<endl;
    cout<< q.getrear()<<endl;
    q.pop();
    q.print();
    return 0;
}