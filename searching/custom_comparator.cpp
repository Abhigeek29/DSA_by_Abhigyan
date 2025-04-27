#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int>&v){
    for(int i = 0 ; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
bool custom_comparator(int &a,int &b){
    return a>b ; // returns in decreasing order
}
int main(){
    vector<int>v {44,55,22,33,11};
    sort(v.begin() , v.end(), custom_comparator);
    print(v);
    sort(v.begin() , v.end());
    print(v);
    return 0 ;
}