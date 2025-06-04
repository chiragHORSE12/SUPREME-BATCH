#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class graph{
    public:

    unordered_map<int,list<int>> adjlist;

    void addedge(int u,int v,bool direction){
        adjlist[u].push_back(v);

        if(direction==0){
            adjlist[v].push_back(u);
        }
    }

    void printadj(){
        for(auto node:adjlist){
            cout<<node.first<<"->";
            for(auto neighbour:node.second){
                cout<<neighbour<<",";
            }
            cout<<endl;
        }
    }

    void bfs(int src,unordered_map<int,bool>& visited){
        queue<int> q;
        q.push(src);
        visited[src]=true;

        while(!q.empty()){
            int fnode=q.front();
            q.pop();
            cout<<fnode<<",";

            //
           for(auto neighbour:adjlist[fnode]){
                //check wether the value is visited or not 
                if(!visited[neighbour]){
                    //not visited then push into queue
                    q.push(neighbour);
                    //mark value as visited
                    visited[neighbour]=true;
                }
            }
        }
    }

};

int  main(){ 

    graph g;
    g.addedge(0,1,0);
    g.addedge(1,2,0);
    g.addedge(1,3,0);
    g.addedge(3,5,0);
    g.addedge(3,7,0);
    g.addedge(7,6,0);
    g.addedge(7,4,0); 
    g.printadj();
    unordered_map<int,bool> visited;
    
    // to handle the condition of unconnected graph 
    for(int i=0;i<=7;i++){
        if( !visited[i]){
            g.bfs(i,visited);
        }
    }
    return 0;

}
