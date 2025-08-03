// how to sort a stack 
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
void sortstack(stack<int>&st){
    if(st.empty()){
        return ;
    }
    int temp = st.top();
    st.pop();

    // recursion
    sortstack(st);

    // backtrack
    insert(st,temp);
}
int main() {
    stack<int>st;
    st.push(10);
    st.push(5);
    st.push(9);
    st.push(8);
    st.push(12);

    sortstack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}