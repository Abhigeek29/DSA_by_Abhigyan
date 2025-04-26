
#include<iostream>
#include<vector>
using namespace std; 
void insertion_sort(vector<int>&v){
    int n = v.size();
    for(int i = 1 ; i<n;i++){  //ignoring the first element
        int key = v[i];
        int j = i-1; // first element ke peeche ke elements se compare kar rahe thhey 
        while(j>=0 && v[j]>key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}
void print(vector<int>&v){
    for (int i =0 ;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector <int> v {44,33,55,22,11};
    insertion_sort(v);
    print(v);
    return 0 ;
}