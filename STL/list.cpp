#include<iostream>
#include<vector>
#include<list>
using namespace std; 
int main(){
    list <int> ls = {10,20,30,40};
    ls.push_back(50);
    for(auto it : ls){
        cout<<it<< " ";
    }
    return 0 ;
}