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

    void dfs(int src,unordered_map<int,bool>& visited){
        cout<<src<<",";
        visited[src]=true;

        for(auto neighbour:adjlist[src]){
            if(!visited[neighbour]){
                dfs(neighbour,visited);
            }
        }
    }

};
int main(){
    graph g;
    //number of node in graph
    int n=5;
    g.addedge(0,1,0);
    g.addedge(1,3,0);
    g.addedge(0,2,0);
    g.addedge(2,4,0);
    // g.addedge(3,7,0);
    // g.addedge(7,6,0);
    // g.addedge(7,4,0);

    g.printadj();
    cout<<"printing the bfs :"<<endl;
     unordered_map<int,bool> visited;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            g.bfs(i,visited);
        }

    }
    cout<<endl;
    cout<<"printing the dfs :"<<endl;
    //crete visited2 for dfs 
    unordered_map<int,bool> visited2;
    for(int i=0;i<n;i++){
        //check visited or not in visited 2 
        if(!visited2[i]){
            // recursive call
            g.dfs(i,visited2);
        }

    }
}