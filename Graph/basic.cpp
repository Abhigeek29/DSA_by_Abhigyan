#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<pair<int,int>> edges = {
        {0,1},
        {1,2},
        {1,3},
        {2,3}
    };
    int n = edges.size();
    // initialised adjacency matrix
    vector<vector<int>> adjacencymatrix(n,vector<int>(n,0));
    // filling the matrix
    for(auto it :edges){
        int u = it.first;
        int v = it.second;
        adjacencymatrix[u][v] = 1 ; 
        // adjacencymatrix[v][u] = 1 ;  // in case of undirected graphs
    }
    //printing graph
    for(int i = 0 ; i<n;i++){
        for(int j = 0 ; j<n;j++){
            cout<<adjacencymatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}