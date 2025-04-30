// In this we have sorted vectors of vectors
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printvv(vector<vector<int>>&v){
    cout<<"printing the value of a and b"<<endl;
    for (int i =0 ; i<v.size();i++){
        vector<int>&temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout<<a<<" "<<b<<endl;
    }
}
bool mycomp(vector<int>&a , vector<int>&b){
    return a[1]<b[1];
}
int main(){
    vector<vector<int>>v;
    int n ; 
    cout<<"Enter the no. of elements you want in the vector"<<endl;
    cin>>n;
    for(int i = 0 ; i<n ;i++){
        int a , b;
        cout<<"Enter the value of a and b"<<endl;
        cin>>a>>b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    printvv(v);
    sort(v.begin(),v.end(), mycomp);
    printvv(v);
    return 0;
}