#include<iostream>
#include<vector>
using namespace std;

bool issafe(int i,int j,int row,int col,int maze[3][3],vector<vector<bool>> &visited){
    if((i>=0 && i < row)&&(j>=0 && j < col)){
        if(maze[i][j]==1){
            if(visited[i][j]==false){
            return true;
            }    
        }
    }
return false;
}
void solvemaze(int maze[3][3],int row,int col,int i ,int j,vector<vector<bool>> &visited,vector<string> &path,string ans){
    //base case
    if((i == row-1)&&(j == col-1)){
        //answer found put ans in path
        //cout<<ans<<endl;
        path.push_back(ans);
        return;
    }

    //down -> i+1,j
    if(issafe(i+1 , j, row, col, maze, visited)){
        visited[i+1][j]=true;
        solvemaze(maze,row,col,i+1,j,visited,path,ans+'D');
        //recursive call
        visited[i+1][j]=false;

    }

    //left -> i,j-1
    if(issafe(i, j-1, row, col, maze, visited)){
        visited[i][j-1]=true;
        solvemaze(maze,row,col,i,j-1,visited,path,ans+'L');
        //recursive call
        visited[i][j-1]=false;
    }

    //right -> i,j+1
    if(issafe(i,j+1,row,col,maze,visited)){
        visited[i][j+1]=true;
        solvemaze(maze,row,col,i,j+1,visited,path,ans+'R');
        //recursive call
        visited[i][j+1]=false;
    }

    //up -> i-1,j
    if(issafe(i-1,j,row,col,maze,visited)){
         visited[i-1][j]=true;
        solvemaze(maze, row, col, i-1, j, visited, path,ans+'U');
        //recursive call
        visited[i-1][j]=false;
    }
    

}

int main(){
    int maze [3][3]={{1,0,0},
                   {1,1,0},
                   {1,1,1}};
     if(maze[0][0]== 0){
    cout<<"no path exist"<<endl;
    }
    int row=3;
    int col=3;
    vector<vector<bool>> visited(row,vector <bool>(col,false));
    //starting point ko true mark kardete h
    visited[0][0] =true;
    vector<string> path;
    string ans=" ";
    int i;
    int j;

    solvemaze(maze,row,col,0,0,visited,path,ans);
    cout<<"printing the result of maze :"<<endl;
    for(auto val:path){
        cout<<val<<" ";
    }
    cout<<endl;


return 0;
}
