#include<iostream>
#include<vector>
using namespace std;

bool issafe(int i,int j,int row,int col,int arr[3][3],vector<vector<bool>>& visited){
    if(((i >= 0) && (i < row))&& ((j >= 0) && (j < col)) && (arr[i][j]=1) && (visited[i][j]=false)){
        return true;
    }
    else{
        return false;
    }
}

void ratinmaze(int arr[][3],int row ,int col,int x,int y,vector<vector<bool>>& visited,string output,vector <string>& path){
//base case lekh do 
    if(x == row-1 && y == col-1){
        //answer andar dal do
        cout<<output<<endl;
        path.push_back(output);
        return;
    }
//down ke leye ->i+1,j
    if(issafe(x+1,y,row,col,arr,visited)){
        visited[x+1][y]=true;
        ratinmaze(arr,row,col,x+1,y,visited,output+'D',path);
        visited [x+1][y]= false;

    }
//left ke leye -> i,j-1
    if(issafe(x,y-1,row,col,arr,visited)){
        visited[x][y-1]=true;
        ratinmaze(arr,row,col,x,y-1,visited,output+'L',path);
        //backtrack karo duare sollution ke leye
        visited [x][y-1]=false;

    }
//right ke leye -> i,j-1
    if(issafe(x,y+1,row,col,arr,visited)){
        visited [x][y+1]=true;
        ratinmaze(arr,row,col,x,y+1,visited,output+'R',path);
        //back track karo 
        visited[x][y+1]=false;
    }
//up ke leye   -> i-1,y
    if(issafe(x-1,y,row,col,arr,visited)){
        visited [x-1][y]=true;
        ratinmaze(arr,row,col,x+1,y,visited,output+'U',path);
        //backtrack
        visited [x-1][y]=false;
 }

}

int main(){
    int maze[3][3]={{1,0,0},
                  {1,1,0},
                  {1,1,1}};
    int row=3;
    int col=3;
    int x;
    int y;
    vector<vector<bool>> visited(row, vector<bool>(col,false));
    // phele value ko true mark kar deya h visited par 
    visited [0][0]=true;
    vector <string> path;
    string output =" ";

    ratinmaze(maze,row,col,0,0,visited,output,path);
    cout<<"path for rat is:"<<endl;
    for(auto i : path){
        cout<<i<<" ";
    }
    cout<<endl;
}