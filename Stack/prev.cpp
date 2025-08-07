#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> prevelement(int *arr , int size , vector<int>& ans) {
    stack<int> st;
    st.push(-1); 

    for(int i = 0; i < size; i++) {
        int curr = arr[i];

        while(st.top() <= curr && st.top() != -1) {
            st.pop();
        }

        ans[i] = st.top(); 
        st.push(curr);     
    }

    return ans;
}

void print(vector<int>& ans) {
    for(int i = 0 ; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {8, 4, 6, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans(size);
    prevelement(arr, size, ans);
    print(ans);
    return 0;
}
