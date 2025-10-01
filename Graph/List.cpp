// adjacency list --> graph
#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class Graph{
public:
    unordered_map<int,list<int>> adList;
    void addEdge(int u , int v , bool direction){
        if(direction==1){
            //directed graph
            adList[u].push_back(v);
        }
        else{
            // undirected graph
            adList[u].push_back(v);
            adList[v].push_back(u);
        }
    }
    void printlist(){
        for(auto it:adList){
            cout<<it.first<<"->"<<"{" ;
            for(auto neighbour : it.second){
                cout<<neighbour<<"," ;
            }
            cout<<"}"<<endl;
        }
    }
};
int main() {
    Graph g;
    //Undirected graph examples
    // g.addEdge(0,1,0);
    // g.addEdge(1,2,0);
    // g.addEdge(1,3,0);
    // g.addEdge(3,4,0);
    // g.addEdge(4,5,0);
    // g.addEdge(5,3,0);
    // g.printlist();

    //directed graph examples
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(1,3,1);
    g.addEdge(3,4,1);
    g.addEdge(4,5,1);
    g.addEdge(5,3,1);
    g.printlist();
    return 0;
}