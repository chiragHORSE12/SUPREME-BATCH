#include<iostream>
using namespace std;

void solve( int** ptr){

    //case 1
    ptr =ptr+1;
     //case 2

    *ptr=*ptr+1;
    
    //case 3
    **ptr =**ptr+1;
}

int main(){
    int a=5;
    int* b = &a;
    int** c = &b; 
    solve(c);
    cout<<"value of x:";
    cout<<a<<endl;
    

    
    return 0;
}