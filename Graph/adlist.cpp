#include<iostream>
#include<map>
#include<unordered_map>
#include<list>
#include<vector>
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
int main(){
    Graph g;
    g.addegde(0,1,0);
    g.addegde(0,2,0);
    g.addegde(1,2,0);
    g.addegde(1,3,0);
    g.addegde(2,4,0);
    g.addegde(3,4,0);
    g.print();
    return 0;
}