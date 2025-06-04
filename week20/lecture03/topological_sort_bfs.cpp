#include<iostream>
#include<unordered_map>
#include<queue>
#include<list>

using namespace std;

class graph{
    unordered_map<int,list<int>> adjlist;

    void addedge(int u,int v,bool direction){
        adjlist[u].push_back(v);
        if(direction==0){
            adjlist[v].push_back(u);
        }
    }
     void toposort_bfs(int n){
        unordered_map<int,int> indegree;
        queue<int> q;

        //calculate indegree
        for(auto i:adjlist){
            int src=i.first;
            for(auto nbr:i.second){
                indegree[nbr]++;
            }
        }

        //push node into queue
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.pop();
            }
        }

        //BFS LOGIC
        while(!q.empty()){
            int Fnode=q.front();
            q.pop();
            cout<<Fnode<<",";

            for(auto nbr:adjlist[Fnode]){
                indegree[Fnode]--;

                //check for zero again
                int Fnode=q.front();
                q.pop();
            }
        }
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
    return 0;
}

