#include<iostream>
using namespace std;

int main() {
    pair<int,int> p = {1,2};
    pair<int,int> p2(3,4);

    cout<<p.first<<endl;  // 1
    cout<<p.second<<endl; // 2

    // Nested pairs

    pair<int , pair<int,int> > p5 = {13,{4,5}};

    // Making an array of pairs
    pair<int,int> arr[] = {{1,2},{3,4}};

    
    return 0;
}