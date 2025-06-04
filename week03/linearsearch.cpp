#include<iostream>
using namespace std;
void  find(int array[],int size,int key){
   int  flag=0;
    for(int i=0;i<size ;i++){
        if(array[i]==key){
            flag =1;
        }
    }
    if(flag==0){
        cout<<" element not found";
    }
    if(flag ==1){
        cout<<" element  found";
    }
    
   
}
   int main(){
    int array[]={5,3,4,2,8,9,7,40,84};
    int size = 10;
    int key = 99;
    int flag= 0;
    find (array , size , key );
    
    return 0;
}