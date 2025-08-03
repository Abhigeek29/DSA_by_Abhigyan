/*Implementation of stack using array*/
#include<iostream>
using namespace std;

class Stack{
public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        this->size=size;
        arr = new int[size];
        this->top = -1;
    }

    void push(int data){
        if(top==size-1){
            cout<<"stack overflow"<<endl;
        }
        else{
            top++;
            arr[top] = data;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"stack is already empty"<<endl;
        }
        else{
            top--;
        }
    }

    int gettop(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
        }
        else{
            return arr[top];
        }
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    int getsize(){
        return top+1;
    }
    void print(){
        if(top==-1){
            cout<<"stack is empty cannot print"<<endl;
        }
        else{
            cout<<"top is "<<top<<endl;
            cout<<"top element is :  "<<arr[top]<<endl;
            cout<<"stack :";
            for(int i = 0 ; i<getsize();i++){
            cout<<arr[i]<<" ";
            }
            cout<<endl<<endl;
        }
       
    }
};

int main() {
    Stack st(10);
    st.push(10);
    st.print();
    st.push(20);
    st.print();
    st.push(30);
    st.print();
    st.push(40);
    st.print();
    st.push(50);
    st.print();
    st.push(60);
    st.print();
    return 0;
}