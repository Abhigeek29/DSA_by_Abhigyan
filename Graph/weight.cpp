// making weighted graph 
#include<iostream>
#include<vector>
using namespace std;
void print(int n , vector<vector<int>> &matrix){
    for(int i = 0 ; i<n;i++){
        for(int j = 0 ; j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int vertices,edges;
    cout<<"Enter the number of vertices and edges in that order"<<endl;
    cin>>vertices>>edges;
    vector<vector<int>> adjacencymatrix(vertices,vector<int>(edges,0)); // init 0
    int u , v , weight;
    cout<<"Enter the indices and their respective weights"<<endl;
    for(int i = 0 ; i<edges;i++){
        cin>>u>>v>>weight;
        adjacencymatrix[u][v] = weight;
        adjacencymatrix[v][u] = weight;
    }

    print(vertices,adjacencymatrix);
    return 0;
}