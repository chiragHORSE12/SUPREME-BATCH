#include<iostream> 
using namespace std;

int get_diecesum_recursion(int n,int target,int faces){
    if(n < 0){
        return 0;
    }
    if(n == 0 && target ==0){
        return 1;
    }
    if( n== 0 && target != 0){
        return 0;
    }
    if(n != 0 && target ==0){
        return 0;
    }
    int sum=0;
    for(int f=6;f>0;f--){
        sum += get_diecesum_recursion(n-1,target-f,faces);

    }
    return sum;
}

int main(){
    int n=2;
    int target=7;
    int faces =6;
    int ans=get_diecesum_recursion(n,target,faces);
    cout<<"total possible diece roll with sum "<<target<<" is :" <<ans<<endl;
    return 0;
}