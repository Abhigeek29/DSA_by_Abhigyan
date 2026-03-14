// sorting a stack through recursion
/*
     base case : single element in a tack sorted hi rehta hai 
     hypothesis : mai ek case karunga woh baaki khud sort karke dedega
     induction : mai chhota karta rahunga , phir top se compare karke daalta rahunga 
*/
#include<iostream>
#include<stack>
using namespace std;
void insertion(stack<int>&st,int n , int element){
    if(st.size()==0 || st.top()<element){
        st.push(element);
        return;
    }
    int topper = st.top();
    st.pop();
    insertion(st,n-1,element);
    st.push(topper);

}
void sorting(stack<int>&st){
    // base case
    if(st.size()==1) return;

    // hypothesis
    // chhota karo 
    int top_element = st.top();
    st.pop();
    sorting(st);
    // induction
    insertion(st,st.size()-1,top_element);
}
int main() {
    stack<int>st;
    st.push(5);
    st.push(1);
    st.push(0);
    st.push(2);
    int n = st.size();
    sorting(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}