// Insertion at bottom 
#include<iostream>
#include<stack>
using namespace std;


void insertatbottom(stack<int>&st , int &data){
    if(st.empty()){
        // base case
        st.push(data);
        return;
    }

    int temp = st.top();
    st.pop();

    insertatbottom(st,data);

    //backtrack 
    st.push(temp);

}
void reversestack(stack<int>&st){
    if(st.empty()){
        return;
    }

    // 1 case mai solve karunga
    int temp = st.top();
    st.pop();

    // recursion 
    reversestack(st);

    // backtrack
    insertatbottom(st,temp);
}
int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    // int data = 400;
    // // int size = st.size();
    // insertatbottom(st,data);
    reversestack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}