#include<iostream>

using namespace std;
bool issafe(int row,int col,int value,int board[][9],int n){
    //row chek karo
    for(int i=0;i<n;i++){
       if(board[row][i] == value)
        return false;
    //column check karo 
        if(board[i][col] == value)
        return false;
    //3x3 ka box
    if(board[3*(row/3)+(i/3)][3*(col/3)+(i%3)] == value)
        return false;
    }
    return false;    
}

 bool solve(int board[][9],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //check for empty
            board[i][j]==0;
            for(int value=1;value<=9;value++){
                //check issafe
                if(issafe(i,j,value,board,n)){
                    //place kar do value ko
                    board[i][j]== value;
                    //recursion sambhal lega 
                    bool agekasolution=solve(board,n);
                    if(agekasolution == true){
                        return true;
                    }
                    else{
                    //backtarck kar do
                     board[i][j]== value;
                    }
                }
            }
            return false;
            //1 se 9 tak ke koe value vaha koe sollution nhi nikala
            // yane pichee kae galti k hh!!!!
        }
    }
    //pura suduko fill kar deya h
    return true;
}

int mian(){
    int board[9][9]={
        {4,5,0,0,0,0,0,0,0},
        {0,0,2,0,7,0,6,3,0},
        {0,0,0,0,0,0,0,2,8},
        {0,0,0,9,5,0,0,0,0},
        {0,8,6,0,0,0,2,0,0},
        {0,2,0,6,0,0,7,5,0},
        {0,0,0,0,0,0,4,7,6},
        {0,7,0,0,4,5,0,0,0},
        {0,0,8,0,0,9,0,0,0}
    };
    solve (board,9);
    return 0;
}