#include<iostream>
using namespace std;

class Stack{
public: 
    int* arr;
    int size ;
    int top1;
    int top2;

    Stack(int size){
        this->size = size;
        this->arr = new int[size](); // () this tells it to initialize it with zeroes
        this->top1 = -1;
        this->top2 = size;
    }

    void push1(int data){
        if((top2-top1)==1){
            cout<<"Cannot push further , out of memory"<<endl;
        }
        else{
            top1++;
            arr[top1] = data;
        }
    }
    void pop1(){
        if(top1==-1){
            cout<<"Stack1 is empty cannot pop"<<endl;
        }
        else{
            arr[top1] = 0;
            top1--;
        }
    }
    void push2(int data){
        if((top2-top1)==1){
            cout<<"Cannot push further , out of memory"<<endl;
        }
        else{
            top2--;
            arr[top2] = data;
        }
    }
    void pop2(){
        if(top2==size){
            cout<<"Stack2 is empty cannot pop anything"<<endl;
        }
        else{
            arr[top2] =0;
            top2++;
        }
    }
    void print(){
        cout<<"top1 is "<<top1<<endl;
        cout<<"top2 is "<<top2<<endl;
        cout<<"stack is "<<endl;
        for(int i = 0 ; i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main() {
    Stack st(6);
    st.print();

    st.push1(10);
    st.push2(100);
    st.print();

    st.push1(20);
    st.push2(200);
    st.print();
    st.push1(30);
    st.push1(40);
    st.push2(300);
    st.print();
    st.pop2();
    st.print();
    return 0;
}