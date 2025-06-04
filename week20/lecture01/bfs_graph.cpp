#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<list>
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

    void print(){
        for(auto node:adjlist){
            cout<<node.first<<"->";
            for(auto neighbour:node.second){
                cout<<neighbour<<",";
            }
            cout<<endl;
        }
    }

    void bfs(int src){
        // queue bana deya 
        queue<int> q;
        //map bana deya take pata chal sake visited h k nhi 
        unordered_map<int,bool> visited;
        
        //phele source ko push keya h queue m
        q.push(src);
        // mask as visited
        visited[src]=true;

        while(! q.empty()){
            //front node ko variable m store karayege
            int fnode=q.front();
            //front wale element ko pop kareyege
            q.pop();
            //jo front node tha use print karege
            cout<<fnode<<",";

            // insert th neighbour
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

int main(){
    graph g;

    g.addedge(0,1,0);
    g.addedge(1,2,0);
    g.addedge(1,3,0);
    g.addedge(3,5,0);
    g.addedge(3,7,0);
    g.addedge(7,6,0);
    g.addedge(7,4,0);

    g.print();

    g.bfs(0);
    return 0;
}