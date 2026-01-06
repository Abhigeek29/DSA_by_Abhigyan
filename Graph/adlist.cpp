// making graph using adjacency list 
#include<iostream>
#include<map>
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>
#include <utility>

using namespace std;

class Graph{
public:
    map<int,list<int>> adjlist;

    void addegde(int u , int v , bool direction){
        if(direction==1){
            // directed only
            adjlist[u].push_back(v);
        }
        else{
            adjlist[v].push_back(u);
            adjlist[u].push_back(v);
        }
    }

    void print(){
        for(auto it : adjlist){
            cout<<it.first<<" -> ";
            for(auto nbr : it.second){
                cout<<nbr<<" ";
            }
            cout<<endl;
        }
    }
};

class Weighted_Graph{
public:
    map<int,vector<pair<int,int>>> adlist;

    void edge(int u , int v , int weight , int direction){
        if(direction==1){
            adlist[u].push_back(make_pair(v,weight));
        }
        else{
            adlist[v].push_back(make_pair(u,weight));
            adlist[u].push_back(make_pair(v,weight));
        }
    }

    void print(){
        for(auto it : adlist){
            cout<<it.first<<" -> ";
            for(auto nbr : it.second){
                cout<<"("<<nbr.first<<" , "<<nbr.second<<") ";
            }
            cout<<endl;
        }
    }
};

// ---------------- BFS ----------------
void bfs(int n , map<int,list<int>>& adjlist){
    vector<int> ans;
    vector<bool> visited(n,false);
    queue<int> q;

    q.push(0);
    visited[0] = true;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for(auto nbr : adjlist[node]){
            if(!visited[nbr]){
                visited[nbr] = true;
                q.push(nbr);
            }
        }
    }

    cout<<"BFS: ";
    for(auto it : ans){
        cout<<it<<" ";
    }
    cout<<endl;
}

// ---------------- DFS ----------------
void dfs_helper(int node , map<int,list<int>>& adjlist , vector<bool>& visited , vector<int>& ans){
    visited[node] = true;
    ans.push_back(node);

    for(auto nbr : adjlist[node]){
        if(!visited[nbr]){
            dfs_helper(nbr,adjlist,visited,ans);
        }
    }
}

void dfs(int n , map<int,list<int>>& adjlist){
    vector<bool> visited(n,false);
    vector<int> ans;

    dfs_helper(0,adjlist,visited,ans);

    cout<<"DFS: ";
    for(auto it : ans){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    Graph g;
    g.addegde(0,1,0);
    g.addegde(0,2,0);
    g.addegde(1,2,0);
    g.addegde(1,3,0);
    g.addegde(2,4,0);
    g.addegde(3,4,0);

    g.print();
    cout << endl;

    // number of vertices = 5 (0 to 4)
    bfs(5, g.adjlist);
    dfs(5, g.adjlist);

    cout << endl;

    Weighted_Graph m;
    m.edge(0 , 1 , 10 , 0);
    m.edge(0 , 2 , 5 , 0);
    m.edge(1 , 2 , 7 , 0);
    m.edge(1 , 3 , 6 , 0);
    m.edge(2 , 4 , 9 , 0);
    m.edge(3 , 4 , 8 , 0);

    m.print();

    return 0;
}

