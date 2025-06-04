#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
    public:
    unordered_map<int,list<pair<int,int>>> adjlist;

    void addedge(int u,int v,int weight,bool direction){
        //direction = 0 ->undirected graph 
        // direction =1 directed graph 

        adjlist[u].push_back({v,weight});
        
        if(direction == 0){
            adjlist[v].push_back({u,weight});
        }
    }
    void printadjlist(){
        for(auto node:adjlist){
            cout<<node.first<<" -> "<<"{";
            for(auto neighbour:node.second){
                cout<<"("<<neighbour.first<<","<<neighbour.second<<"),";
            }
    
            cout<<"}"<<endl;
        }
    }
};

int main(){
    graph g;
    //directed input
    //g.addedge(source_node,destination_node,weight,directed/undirected)
    g.addedge(0,1,5,0);
    g.addedge(2,0,8,0);
    g.addedge(3,2,2,0);

    g.printadjlist();
    return 0;

}

