#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    for(int row=0;row<n;row++)
    {
        //spaces
        for(int col=0;col<n-row;col++){
            cout<<" ";
        }
        //star
        for(int col=0;col<2*row+1;col++)
        {
            if(col==0||col==2*row)
            {
             cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
     for(int row=0;row<n;row++)
    {
        //spaces
        for(int col=0;col<row+1;col++){
            cout<<" ";
        }
        //star
        for(int col=0;col<2*n-2*row-1;col++)
        {
            //first character or last character
            if(col==0||col==2*n-2*row-2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
    cout<<endl;
    }

return 0;    
}





































































































































































































































































































































































































































































































































































