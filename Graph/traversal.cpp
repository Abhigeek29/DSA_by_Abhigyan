//  graph traversals
#include<iostream>
#include<list>
#include<unordered_map>
#include<vector>
#include<queue>
using namespace std;
// template<typename T> // TO GENERALISE THE DATATYPE 
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
    void bfs(int src){
        unordered_map<int,bool> vis;
        // marking every node as false initially
        for(auto it : adjacencyList){
            vis[it.first] = false;
        }
        queue<int> q; 
        q.push(src);
        vis[src] = true;
        while(!q.empty()){
            int frontnode = q.front(); 
            cout<<frontnode<<" ";
            q.pop();
            for(auto it: adjacencyList[frontnode]){
                // frontnode ke adjacency list ke numbers push karne hai 
                if(vis[it.first]==false){
                    q.push(it.first);
                    vis[it.first] = true;
                }
            }
        } 
    }
    void dfs(int src , unordered_map<int,bool>&vis){
        vis[src] = true;
        cout<<src<<" ";
        for(auto it:adjacencyList[src]){
            int nbrdata = it.first;
            if(!vis[nbrdata]){
                dfs(nbrdata,vis);
            }
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

    g.bfs(0);
    unordered_map<int,bool> vis;
    cout<<endl;
    g.dfs(0,vis);
    return 0;
}