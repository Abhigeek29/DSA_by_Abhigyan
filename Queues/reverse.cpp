// reversing a queue using stack
#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverse(queue<int>&q){
    stack<int> st;
    // pushing elements onto stack
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    // transfering elements onto queue
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}
int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    reverse(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
    return 0;
}