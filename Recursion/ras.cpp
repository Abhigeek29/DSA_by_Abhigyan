/* reversing a stack using recursion

*/
#include<iostream>
#include<stack>
using namespace std;
void buildback(stack<int>&st,int elem){
    if(st.empty()){
        st.push(elem);
        return;
    }
    int topper = st.top();
    st.pop();
    buildback(st,elem);
    st.push(topper);
}
void rev(stack<int>&st){
    if(st.size()==0){
        return;
    }
    int elem = st.top();
    st.pop();
    rev(st);
    buildback(st,elem);
}
int main() {
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    rev(st);
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    return 0;

}