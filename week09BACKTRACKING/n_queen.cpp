#include<iostream>
#include<vector>

using namespace std;
void printsolution(vector<vector<char>> board,int n){
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
        cout<<board[i][j]<<" ";
        }
         cout<<endl;
    }
    cout<<endl<<endl;
}
bool isSafe(int row,int col,vector<vector<char>> board,int n){
    //check karo k hum queen place kar sakte h kya
    //current cell par q place kar sakta hub k nhi
    int i=row;
    int j=col;
    
    //pheche wale part me koe queen to place nhi ke hue h 
    //case 1:check row
    while(j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        j--;
    }
    //case 2:upper left diagonal
    i=row;
    j=col;
    while(i >= 0 && j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i--;
        j--;
    }
    //case 3:bottom left diagonal
    i=row;
    j=col;
    while(j >= 0 && i < n ){
        if(board[i][j] == 'Q'){
            return false;
        }
        i++;
        j--;
    }
    //kahi par bhi queen place nhi ke hue h 
    //current cell board[row][col] par 
    //hum queen place kar sakte h
    return true;
}
void solve(vector<vector<char>> &board,int col,int n){
    //base case 
    if(col >= n){
        printsolution(board,n);
        return;
    }
    //ek case solve karo bake recursion karega
    int row;
    for( row = 0; row < n; row++){
        if(isSafe(row,col,board,n)){
            //queen place kardo
            board[row][col]='Q';

            //recurcive call lagado
            solve(board,col+1,n);
            //backtracking
            board[row][col]='_';
        }

    }
}

int main(){
    int n;
    cout<<"enter the size of board :";
    cin>>n;
    int col=0;
    //1-> queen present h
    //0-> empty box
    vector<vector<char>> board (n,vector<char>(n,'_'));
    solve(board,col,n);
    return 0;
}