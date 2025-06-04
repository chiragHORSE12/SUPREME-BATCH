#include<iostream>
#include<vector>
using namespace std;

int binarysearch(int ar[],int size, int key){
    int s=0;

    int e=size-1;

    int m=(s+e)/2;

    int element=ar[m];
    while(s<=e){
        int element=ar[m];
        if(element==key){
            return m;
        }
        else if(element>key){
            e=m-1;
        }
        else{
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return -1;
}

int main(){
    int ar[]={1,2,3,4,5,6,7,8,9};
    int size=8;
    int key=6;
    int indexofkey=binarysearch(ar,size,key);
    if(indexofkey==-1)
    {
        cout<<" element not   found!!!!"<<endl;
    }
    else
    {
        cout<<"element  $$$$"<<"at"<<indexofkey<<endl;
    }
    return 0;
}
