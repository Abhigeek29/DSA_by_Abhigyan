/* generating all balanced paranthesis problem 
*/

#include <iostream>
#include<string.h>
#include<string>
#include<vector>
using namespace std;
void gabp(int close , int open , vector<string>&ans,string &output){
    //base case open and close zero 
    if(open ==0 && close ==0){
        ans.push_back(output);
        return;
    }

    if(open!=0){
        output.push_back('(');
        gabp(close,open-1,ans,output);
        output.pop_back();
    }
    if(close>open){
        output.push_back(')');
        gabp(close-1,open,ans,output);
        output.pop_back();
    }
}
int main() {
    int n ; 
    cin>>n;
    int close = n ;
    int open = n ;
    vector<string> ans ; 
    string output = "";
    gabp(close,open,ans,output);

    for(int i = 0 ; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}