#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of nodes : ";
    cin>>n;

    vector<vector<int>> adj(n,vector<int>(n,0));

    int e;
    cout<<"enter the number of edges : ";
    cin>>e;

    for(int i=0; i<e;i++){
        int u,v;
        // space dena nhi bhul naa nhi varna  
        // print k time par compiler  samajh nhi payege value of u & value of v
        cin>> u >> v;
        //marked as 1
        adj[u][v]=1;
    }
    //printing graph
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}