// Check is redundant bracket is present or not 

#include<iostream>
#include<stack>
using namespace std;
bool check_redundant(string &str){
    stack<int>st;
    for(auto ch: str){
        if(ch=='(' || ch=='+' ||ch=='-'|| ch=='/' || ch=='*'){
            st.push(ch);
        }
        else if(ch==')'){
            int count_op = 0;
            while(!st.empty() && st.top()!='('){
                char temp = st.top();
                if(temp=='+' || temp =='-' || temp=='*' || temp=='/'){
                    count_op++;
                }
                st.pop();
            }
            if(count_op ==0){
                return true;
            }
        }
    }
    return false;
}
int main() {
    string str = "((a+b)*(c+d))";
    bool ans = check_redundant(str);
    if(ans == true){
        cout<<"Yes the redundant bracketts are present"<<endl;
    }
    else{
        cout<<"No,the redundant bracketts are not present"<<endl;
    }
    return 0;
}