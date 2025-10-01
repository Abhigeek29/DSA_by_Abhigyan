//  representing weighted graphs using adjacency list
#include<iostream>
#include<list>
#include<unordered_map>
#include<vector>
using namespace std;

class Graph{
public:
    unordered_map<int,list<pair<int,int>>> adjacencyList;
    void addEdge(int u , int v, int wt, bool direction){
        if(direction==1){
            //directed graph
            adjacencyList[u].push_back({v,wt});
        }
        else{
            adjacencyList[u].push_back({v,wt});
            adjacencyList[v].push_back({u,wt});
        }
    }

    void printlist(){
        for(auto it : adjacencyList){
            cout<<it.first<<"->"<<"{";
            for(pair<int,int>p: it.second){
                cout<<"{"<<p.first<<","<<p.second<<"}"<<",";
            }
            cout<<"}"<<endl;
        }
    }
};
int main() {
    Graph g;
    g.addEdge(0,1,50,1);
    g.addEdge(1,2,40,1);
    g.addEdge(1,3,30,1);
    g.addEdge(2,3,30,1);
    g.addEdge(3,4,10,1);
    g.addEdge(4,5,70,1);
    g.addEdge(5,3,30,1);
    g.printlist();
    return 0;
}