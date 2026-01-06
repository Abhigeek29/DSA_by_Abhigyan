#include<iostream>
#include<vector>
using namespace std;

void print(int n , vector<vector<int>>&matrix){
    for(int i = 0 ; i<n;i++){
        for(int j = 0 ; j<n ; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
// int main(){
//     vector<pair<int,int>> edges = {
//         {0,1},
//         {0,2},
//         {1,2},
//         {1,3},
//         {2,4},
//         {3,4},
//     };
//     int n ; //
//     cin>>n; 
//     vector<vector<int>> matrix(n ,vector<int>(n,0)); // adjacency matrix initialized to 0
//     // now traverse and place 
//     for(auto it : edges){
//         // it holds the pair 
//         int u = it.first;
//         int v = it.second;
//         matrix[u][v] = 1;
//         // matrix[v][u] = 1; // for undirected graph
//     }
//     print(n,matrix);
//     return 0;
// }

int main(){
    int vertices , edges ;
    cout<<"Please first enter no. of vertices and then edges"<<endl;
    cin>> vertices>>edges;

    vector<vector<int>> adjacencymatrix(vertices, vector<int>(edges,0)); // 0 init
    int u , v;
    if(edges> (vertices*(vertices-1)/2)){
        cout<<"impossible case"<<endl;
        return 0;
    }
    for(int i = 0 ; i<edges;i++){
        cin>>u>>v;
        adjacencymatrix[u][v] = 1;
        adjacencymatrix[v][u] = 1;
    }
    print(vertices,adjacencymatrix);
    return 0 ;
}