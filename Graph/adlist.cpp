#include<iostream>
#include<map>
#include<unordered_map>
#include<list>
#include<vector>
// #include<pair>
#include <utility>

using namespace std;
class Graph{
public:
    map<int,list<int>> adjlist;
    void addegde(int u , int v , bool direction){
        if(direction==1){
            // directed  only 
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
    map<int,vector<pair<int,int>>>adlist;
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
                cout<<"("<<nbr.first<<" , "<<nbr.second<<")"<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Graph g;
    g.addegde(0,1,0);
    g.addegde(0,2,0);
    g.addegde(1,2,0);
    g.addegde(1,3,0);
    g.addegde(2,4,0);
    g.addegde(3,4,0);
    g.print();
    cout<<endl;
    Weighted_Graph m ;
    m.edge(0 , 1 , 10 , 0);
    m.edge(0 , 2 , 5 , 0);
    m.edge(1 , 2 , 7 , 0);
    m.edge(1 , 3 , 6 , 0);
    m.edge(2, 4 , 9 , 0);
    m.edge(3 , 4 , 8 , 0);
    m.print();
    return 0;
}