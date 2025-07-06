#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
    // creation 
    unordered_map <string , int> m;
    // Insertion methods
    // Method 1
    pair<string,int>p = make_pair("Abhigyan",1);
    m.insert(p);
    // Method 2
    pair<string,int> pair2("Aniket",17);
    m.insert(pair2);
    // Method 3 
    m["Anupama"] = 46;



    // Search
    cout<<m["Abhigyan"]<<endl;
    cout<<m.at("Aniket")<<endl;
    return 0;
}