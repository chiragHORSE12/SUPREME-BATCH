#include<iostream>
#include<vector>
using namespace std;

void printarray(int ar){
    for(int i=0;i<ar.size();i++){
        cout<<ar[i]<<" "; 
    }
}

int main(){
    vector<int> ar{0,1,0,1,0,0,1,1,1,1,0,0,1,0,1,0,1};
    int start=0;
    int end =ar.size()-1;
     int i=0;
     while(i!=end){
        if(ar[i]==0){
            cout<<"found zero"<<endl;
            cout<<"before swap";
            printarray(ar);

            swap(ar[start],ar[end]);
            cout<<"after swap";
            printarray(ar);
            start++;
            i++;
            cout<<" now i="<<i<<"start="<<start<<"end="<<end<<endl;
         }
         else{
            cout<<"found one"<<endl;
            cout<<"before swap";
            printarray(ar);
            swap(ar[end],ar[i]);
            end--;
         }
     }
     //print
     for(auto val :ar){}
     return 0;
   }
