/* permutation with spaces 
*/
#include <iostream>
#include <string.h>
#include <string>
using namespace std;
// method 1
// void rec(string &s,string&output,int index){
//     if(index>=s.length()){
//         cout<<output<<" ";
//         return;
//     }
//     // without space 
//     output.push_back(s[index]);
//     rec(s,output,index+1);
//     output.pop_back();
//     // with space
//     output.push_back('_');
//     output.push_back(s[index]);
//     rec(s,output,index+1);
//     output.pop_back();
//     output.pop_back();

// }
// int main() {
//     string s = "abcd";
//     string output;
//     output.push_back(s[0]);
//     rec(s,output,1);
//     return 0;
// }
// method 2 
void rec(string s , string output){
    if(s.size()==0){
        cout<<output<<" ";
        return;
    }
    char charnew = s[0];
    string rest = s.substr(1);

    // without space 
    rec(rest, output + charnew);
    // with space 
    rec(rest,output + '_' + charnew);

}
int main(){
    string s = "abc";
    string output;
    output.push_back(s[0]);
    rec(s.substr(1),output);
    return 0;
}



