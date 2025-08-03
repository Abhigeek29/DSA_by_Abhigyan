// a common pattern to solve stack questions 
/*prerequisite 
For an even number stack it's middle element is sizeofstack divided by 2

for odd its sizeofstack / 2 + 1

for explanation either visualize or look for it in the notebook

*/
// We are writing the code to determine the middle element of a stack without changing it


#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&st, int &pos , int &ans){
    if(pos ==1){
        // ans milgaya
        ans = st.top();
        return ;
    }

    pos--;
    int temp = st.top();
    st.pop();

    // recursion 
    solve(st,pos,ans);
    // backtrack
    st.push(temp);
}
int getmiddle(stack<int> &st){
    int len = st.size();
    if (st.empty()){
        return -1;
    }
    else{
        int pos = 0;
        if(len%2==0){
        pos = len/2;
        }
        else{
        pos = len/2 +1;
        }
        int ans = -1;
        solve(st,pos,ans);
        return ans;
    }
}
int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    int mid = getmiddle(st);
    cout<<"the middle element is "<<mid<<endl;
    return 0;
}