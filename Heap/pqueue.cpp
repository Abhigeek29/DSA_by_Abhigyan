// implementaion of priority queue 
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {
    // max heap 
    priority_queue<int>p;
    // min heap 
    priority_queue<int,vector<int>,greater<int>>q;
    p.push(20);
    p.push(200);
    p.push(2000);
    p.push(200000);
    p.push(2000000);

    // same stack wale funnctions hai 

    return 0;
}