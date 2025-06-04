#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<" enter the value of n:";
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row;col++){
            cout<<" ";
        }
        int start=1;
        for(int col=0;col<2*row+1;col++){
            //fist rowor last row 
            if(row==0||row==n-1){
                 if(col%2==0){
                    cout<< start;
                    start++;
                }
                 else
                    //odd
                    cout<<" ";
                
            }
            else{
                //first col
                 if(col==0){
                    cout<<1;
                }
                 if(col==2*row-1){
                    cout<<row+1;
                }
                 else 
                    cout<<" ";
                
            }
        }
        cout<<endl;
    }
    return 0;
}