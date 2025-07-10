#include<iostream>
#include<vector>
using namespace std; 
int main(){
    vector<int> v{20,10,30,40};
    for(auto it  :  v){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"elements after erasing"<<" ";
    v.erase(v.begin()+1);
    v.push_back(300);
    for(auto it  :  v){
        cout<<it<<" ";
    }
    return 0 ;
}