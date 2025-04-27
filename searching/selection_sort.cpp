#include<iostream>
#include<vector>
using namespace std;
void selection_sort(vector<int>&v){
    int n = v.size();
    for(int i = 0 ; i<n-1;i++){ // n-1 tak isiliye kia kyuki n-1 element sort kardiye toh nth element apne sorted hoga
        int min_index = i ; // Ith is the smallest index lets assume 
        for(int j = i+1 ; j<n ; j++){
            if(v[j]<v[min_index]){
                min_index = j ;
            }
        }
        // Swap ith with min index 
        swap(v[i],v[min_index]);
    }
}
void print(vector<int>&v){
    for (int i =0 ;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector <int> v {44,33,55,22,11};
    selection_sort(v);
    print(v);
    return 0 ;
}