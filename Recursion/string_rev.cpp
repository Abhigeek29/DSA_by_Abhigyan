// we are printing a string in reverse using recursion 
#include<iostream>
using namespace std;
void solve(string str , int index){
    // takes string and a input
    // base case jab string ki length == index hojaye 
    if(index ==str.length()-1){
        cout<<str[index];
        return;
    }

    solve(str,index+1);
    cout<<str[index];
}
int main() {
    string str ;
    cin>>str;
    solve(str,0);
    return 0;
}