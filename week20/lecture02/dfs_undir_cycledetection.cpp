#include<iostream>
#include<list>
#include<unordered_map>

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

    bool checkCycle_dfs(int src,unordered_map<int,bool> &visited,int parent){
        visited[src]=true;

        for(auto nbr:adjlist[src]){
            if(!visited[nbr]){
                visited[nbr]=true;
                bool check_aageka_ans=checkCycle_dfs(nbr,visited,src);
                if(check_aageka_ans == true){
                    return true;
                }
            }
            if(visited[nbr] && nbr!=parent){
                return true;
            }
        }
        return false;

    }

};

int main(){
    graph g;
    g.addedge(0,1,0);
    g.addedge(1,2,0);
    g.addedge(2,5,0);
    g.addedge(2,6,0);
    g.addedge(2,4,0);
    g.addedge(3,4,0);

    unordered_map<int,bool> visited;
    bool ans=g.checkCycle_dfs(0,visited,-1);

    for(int i=0;i<7;i++){
        if(!visited[i]){
            g.checkCycle_dfs(i,visited,-1);
            if(ans==true){
                break;

            }
        }
    }
    if(ans==true){
        cout<<"cycle detected ";
    }
    else{
        cout<<"cycle not detected ";
    }
    return 0;
}
