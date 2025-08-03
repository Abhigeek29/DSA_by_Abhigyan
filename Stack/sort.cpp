// how to insert in a sorted stack 
#include<iostream>
#include<stack>
using namespace std;

void insert(stack<int>&st, int &data){
    if(st.empty() ||  data>st.top()){
        st.push(data);
        return;
    }
    // 1 case 
    int temp = st.top();
    st.pop();

    //recursion
    insert(st,data);
    //backtrack
    st.push(temp);

}
int main() {
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    int data = 25;
    insert(st,data);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}