#include<iostream>
using namespace std;

int main(){
    int row;
    for(int row =0 ;row<3;row++) {
    if (row==0||row==2)
     {
      for(int col=0;col<6;col++)
      cout <<"*";
     }
    
    else
    // first star
    {
        cout<<"*";
    
    //spaceses
    
        for (int col=0;col<4;col++){
            cout<<" ";
        }
    //last star
    
        cout<<"*";
    }
    cout<<endl;
}  
return 0;
}