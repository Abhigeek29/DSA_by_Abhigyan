#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    unordered_map<string,int> mapping;
    pair<string,int> q = make_pair("Skoda" , 22000);
    pair<string,int> p ("Lambo",1200000000);
    pair<string,int> d ;
    d.first ="Koenisegg";
    d.second = 1700000 ;
    mapping.insert(q);
    mapping.insert(d);
    mapping.insert(p);

    for(auto it : mapping){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}
