/* permutation with spaces 
*/
#include <iostream>
#include <string.h>
#include <string>
using namespace std;
void rec(string &s,string&output,int index){
    if(index>=s.length()){
        cout<<output<<" ";
        return;
    }
    // without space 
    output.push_back(s[index]);
    rec(s,output,index+1);
    output.pop_back();
    // with space
    output.push_back('_');
    output.push_back(s[index]);
    rec(s,output,index+1);
    output.pop_back();
    output.pop_back();

}
int main() {
    string s = "abcd";
    string output;
    output.push_back(s[0]);
    rec(s,output,1);
    return 0;
}