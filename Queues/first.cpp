// Implementing a question - return the first non repeating character in the stream
#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;

void firstnonrepeating(string &s){
    queue<char> q;
    unordered_map<char, int> freq;

    for(int i = 0 ; i<s.length();i++){
        char ch = s[i];
        freq[ch]++; // updating frequency in hashmaps
        q.push(ch);

        while(!q.empty()){
            char character = q.front();
            if(freq[character] >1){
                q.pop();
            }
            else{
                // this is the answer
                cout<<character;
                break; // no need to search further
            }
        }
        // did not ge the answer
        if(q.empty()){
            cout<<"#";
        }
    }
}

int main(){
    string s = "aabca";
    firstnonrepeating(s);
    return 0;
}