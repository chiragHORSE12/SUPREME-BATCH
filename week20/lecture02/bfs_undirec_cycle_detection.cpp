#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;

class graph{
    public:
    unordered_map<int,list<int>> adjlist;

    void addedge(int u,int v,bool direction){
        adjlist[u].push_back(v);
        if(direction == 0){
            adjlist[v].push_back(u);
        }
    }

    bool checkCyclic_bfs(int src,unordered_map<int,bool> &visited){
        queue<int> q;
        unordered_map <int,int> parent;

        q.push(src);
        visited[src]=true;
        parent[src]=-1;

        while(!q.empty()){

            int fnode=q.front();
            q.pop();

            for(auto nbr:adjlist[fnode]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr]=true;
                    parent[nbr]=fnode;

                }
                if(visited[nbr] & nbr !=parent[fnode]){
                //already visited node &not parent
                    //cycle present
                    return true;
                }
        }
        return false;
    }
}
};

int main(){
    graph g;
    int n=7;
    // g.addedge(0,1,0);
    // g.addedge(2,1,0);
    // g.addedge(3,1,0);
    // g.addedge(3,4,0);
    // g.addedge(5,4,0);
    // g.addedge(6,4,0);

    g.addedge(0,1,0);
    g.addedge(2,1,0);
    g.addedge(3,2,0);
    g.addedge(2,4,0);
    g.addedge(5,7,0);
    g.addedge(6,5,0);

    int src;
    cout<<"enter the source node : ";
    cin>>src;

    bool ans=false;
    unordered_map<int, bool> visited;

    ans=g.checkCyclic_bfs(src,visited);

    for(int i=0;i<n;i++){
        if(!visited[i]){
            ans=g.checkCyclic_bfs(i,visited);
            if (ans == true){
                break;
            }
        }
    }
    if(ans ==true){
            cout<<"cycle detected in th graph";
        }
        else{
            cout<<"cycle not detected in th graph";
        }
return 0;
}
