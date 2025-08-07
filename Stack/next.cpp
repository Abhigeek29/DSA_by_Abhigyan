// Implementing next smaller element 
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextsmallerelement(int *arr, int size , vector<int>&ans){
    stack<int> st;
    st.push(-1);
    for(int i = size-1; i>=0 ;i--){
        int curr = arr[i];
        while(st.top() >= curr){
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);
    }
    return ans;
}

void print(vector<int>&ans){
    for(int i = 0 ; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {8, 4, 6, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);  // FIXED LINE
    vector<int> ans(size);
    nextsmallerelement(arr, size, ans);
    print(ans);
    return 0;
}
