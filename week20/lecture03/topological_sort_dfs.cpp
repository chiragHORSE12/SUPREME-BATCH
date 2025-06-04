#include<iostream>
#include<unordered_map>
#include<stack>
#include<vector>
#include<list>
using namespace std;


class graph{
    
    public:
    unordered_map<int,list<int>> adjlist;

    void addedge(int u,int v,bool d){
        adjlist[u].push_back(v);
        if(d == 0){
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
    void topoSortdfs(int src,unordered_map<int,bool> &visited,stack<int> &s){

    visited[src]=true;
    for(auto neighbour : adjlist[src]){
        if(!visited[neighbour]){
            topoSortdfs(neighbour,visited,s);
        }

    }
    //pushing into stack for topological sort
    s.push(src);

}
};


int main(){
    graph g;
    // g.addedge(1,2,1);
    // g.addedge(1,3,1);
    // g.addedge(2,3,1);
    g.addedge(1,2,1);
    g.addedge(0,1,1);
    g.addedge(2,3,1);
    g.addedge(3,4,1);
    g.addedge(3,5,1);
    g.addedge(5,6,1);
    g.addedge(4,6,1);
    g.addedge(6,7,1);

    unordered_map<int,bool> visited;
    stack<int> s;
    int n=7;

    g.topoSortdfs(0,visited,s);

    //to handle dis connected graph
    for(int i=0;i<n;i++){
        if(!visited[i]){
            g.topoSortdfs(i,visited,s);
        }

    }
    //to print the value from stack

    cout<<"Topological Sort Using Dfs :";
    while(!s.empty()){
        cout<<s.top()<<" , ";
        s.pop();
    }
}