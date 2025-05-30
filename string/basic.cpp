#include<iostream>
using namespace std ;
int main(){
    string name;
    getline(cin,name);  // To avoid spaces
    cout<<name<<endl;
    // length function -- counts spaces too
    cout<<name.length()<<endl;
    // Empty string check
    cout<<name.empty()<<endl;
    // to check pos we have .at function
    cout<<name.at(0)<<endl;
    return 0 ;
}