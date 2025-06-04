#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
using namespace std;
template<typename T>

class graph{
    public:
    unordered_map<T,list<T>> adjlist;

    void addedge(T u,T v,bool direction){
        //direction = 0 ->undirected graph 
        // direction =1 ->directed graph 
        adjlist[u].push_back(v);
        
        if(direction == 0){
            adjlist[v].push_back(u);
        }
    }
    void printadjlist(){
        for(auto node:adjlist){
            // if(node.second.size() == 1){
            cout<<node.first<<" -> ";
            //}
            for(auto neighbour:node.second){
                //if(node.second.size() == 1){
                cout<<neighbour<<", ";
                //}
            }
            cout<<endl;
        }
    }
};

int main(){
    graph<int> g;
    //undirected grraph
    g.addedge(0,4,0);
    g.addedge(1,4,0);
    g.addedge(0,3,0);
    g.addedge(2,3,0);
    g.printadjlist();
    
    //directed output
    // g.addedge(0,1,1);
    // g.addedge(1,2,1);
    // g.addedge(0,2,1);
    // g.printadjlist();
    return 0;
    // int n;
    // cout<<"Enter the number of node : ";
    // cin>>n;

    // int e;
    // cout<<"enter the number of edge : ";
    // cin>>e;


}