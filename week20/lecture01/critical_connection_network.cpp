#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
    public:
    unordered_map<int,list<int>> adjlist;

    void addedge(int u,int v,bool direction){
        //direction = 0 ->undirected graph 
        // direction =1 ->directed graph 
        adjlist[u].push_back(v);
        
        if(direction == 0){
            adjlist[v].push_back(u);
        }
    }
    void printadjlist(){
        for(auto node:adjlist){
            if(node.second.size() == 1){
            cout<<node.first<<" -> ";
            }
            for(auto neighbour:node.second){
                if(node.second.size() == 1){cout<<neighbour<<", ";}
            }
            cout<<endl;
        }
    }
};

int main(){
    graph g;
    //undirected grraph
    g.addedge(0,1,0);
    g.addedge(1,2,0);
    g.addedge(2,0,0);
    g.addedge(1,3,0);
    g.printadjlist();
    return 0;
}