//  representing weighted graphs using adjacency list
#include<iostream>
#include<list>
#include<unordered_map>
#include<vector>
using namespace std;
template<typename T> // TO GENERALISE THE DATATYPE
class Graph{
public:
    unordered_map<T,list<pair<T,T>>> adjacencyList;
    void addEdge(T u , T v, T wt, bool direction){
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
            for(pair<T,T>p: it.second){
                cout<<"{"<<p.first<<","<<p.second<<"}"<<",";
            }
            cout<<"}"<<endl;
        }
    }
};
int main() {
    Graph<int> g;
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