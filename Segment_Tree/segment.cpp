#include<iostream>
#include<vector>
using namespace std;
class Segment_Tree{
public:
    vector<int>tree; // segment tree
    int n ; 

    Segment_Tree(vector<int>&arr){
        n= arr.size();
        tree.resize(4*n);
        build(0,0,n-1,arr);
    }

    void build(int idx , int l , int r , vector<int>&arr){
        // leaf node condition 
        if(l==r){
            tree[idx] = arr[l];
            return;
        }
        int mid = (l+r)/2;

        // left subtree building
        build(2*idx+1,l,mid,arr);
        //right subtree building 
        build(2*idx+2 , mid+1,r,arr);

        tree[idx] = tree[2*idx+1] + tree[2*idx+2];
    }
};
int main() {
    vector<int> arr = {1,3,5,7,9,11};
    Segment_Tree st(arr);
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}