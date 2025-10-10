#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;
class Graph{
public:
    unordered_map<int,list<int>>adjacencylist;
    void addEdge(int u , int v , bool direction){
        //if direction == 1 , directed 
        if(direction==1){
            adjacencylist[u].push_back(v);
        }
        else{
            //undirected graph
            adjacencylist[u].push_back(v);
            adjacencylist[v].push_back(u);
        }
    }
    void printlist(){
        for(auto it:adjacencylist){
            cout<<it.first<<":"<<"{";
            for(auto nbr : it.second){
                cout<<nbr<<",";
            }
            cout<<"}"<<endl;
        }
    }
    bool cycleispresent(int src){
        queue<int>q;
        unordered_map<int , bool> visited;
        unordered_map<int,int> parent ;

        // maintaining intial state 
        q.push(src);
        visited[src] = true;
        parent[src] = -1;

        while(!q.empty()){
            int frontnode = q.front();
            q.pop();
            for(auto nbr : adjacencylist[frontnode]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr] = true;
                    parent[nbr] = frontnode;
                }
                else if(visited[nbr]== true && frontnode!=parent[nbr]){
                    // cycle is present 
                    return true;
                    break;
                }
            }
        }
        // cycle is not present 
        return false;
    }
};
int main() {
    Graph g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(3,4,0);
    g.addEdge(2,4,0);
    g.addEdge(4,5,0);
    g.printlist();

    cout<<"checking if cycle is present or not"<<endl;
    int src = 0;
    bool checkcycle = g.cycleispresent(src);
    if(checkcycle){
        cout<<"Yes cycle is present"<<endl;
    }
    else{
        cout<<"Cycle is not present"<<endl;
    }
    return 0;
}