#include<iostream>
#include<list>
#include<unordered_map>

using namespace std;

class graph{
    public:
    unordered_map<int,list<int>> adjlist;

    void addedge(int u,int v){
        adjlist[u].push_back(v);
    }

    bool checkCycle_dfs(int src,unordered_map<int ,bool> &visited , unordered_map<int,bool> &dfsvisited){

        visited[src]=true;
        dfsvisited[src]=true;

        for(auto nbr:adjlist[src]){
            if(!visited[nbr]){
                bool aagekaans=checkCycle_dfs(nbr,visited,dfsvisited);
                if(aagekaans == true){
                    return true;
                }
            }
            if(visited[nbr]==true && dfsvisited[nbr]==true){
                return true;
            }
        }
        //back tracking
        dfsvisited[src]=false;
        return false;
    }
};

int main(){
    graph g;
    g.addedge(0,1);
    g.addedge(1,2);
    g.addedge(2,3);
    g.addedge(3,4);
    g.addedge(1,5);
    g.addedge(1,6);
    g.addedge(6,5);
    g.addedge(3,7);
    g.addedge(7,8);
    //g.addedge(8,3);

    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfsvisited;
    bool ans=false;
    ans=g.checkCycle_dfs(0,visited,dfsvisited);


    for(int i=0;i<9;i++){
        if(!visited[i]){
            g.checkCycle_dfs(i,visited,dfsvisited);
            if(ans == true){
                break;
            }
        }
    }
    if(ans == true){
        cout<<"cycle detected ";
    }
    else{
        cout<<"cycle not detected ";
    }

}