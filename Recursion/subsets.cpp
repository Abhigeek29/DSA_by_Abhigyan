/* subsets of a string recursive problem 
*/
#include<iostream>
#include<string.h>
#include<string>
#include<vector>
using namespace std;
void solve(string&s , string &output , vector<string>&ans , int index ){
    if(index>=s.length()){
        ans.push_back(output);
        return;
    }
    // exclude 
    solve(s,output,ans,index+1);

    // include
    output.push_back(s[index]);
    solve(s,output,ans,index+1);
    output.pop_back();
}
// void solve(string s , string output,vector<string>&ans){
//     if(s.size()==0){
//         cout<<output<<" ";
//         ans.push_back(output);
//         return;
//     }
//     string output1 = output;
//     string output2 = output ; // isme humein answer lena hai toh woh output mai judega
//     output2.push_back(s[0]);

//     s.erase(s.begin() + 0); // humesha 0th index erase hoga 

//     solve(s,output1,ans);
//     solve(s,output2,ans);
// }
int main() {
    string s = "abcd";
    string output = "";
    vector<string> ans;
    solve(s,output,ans,0);
    cout<<ans.size()<<endl;
    return 0;
}