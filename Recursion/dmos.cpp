/* deleting the middle element of a stack using recursion
*/
#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>&st){
    cout<<"The stack after middle element deletion is :"<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
void solve(stack<int>&st,int k){
    // base case
    if(k==1){
        st.pop();
        return;
    }
    //hypothesis
    // store top
    int temp = st.top();
    st.pop();
    //induction
    solve(st,k-1);
    st.push(temp);
}
int main() {
    stack<int>st;
    int n; 
    cout<<"enter the no. of elements you want in stack"<<endl;
    cin>>n;
    for(int i =1 ; i<=n;i++){
        int temp =0;
        cout<<"Enter the "<<i<<"th element of the stack"<<endl;
        cin>>temp;
        st.push(temp);
    }

    if(st.size()==0){
        cout<<"stack is empty"<<endl;
    }
    int k = st.size()/2+1;
    if(n%2==0){
        solve(st,k);
        solve(st,k-1);
    }
    else{
        solve(st,k);
    }
    print(st);
    return 0;
}