#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector <int> arr(9,-1);
   int ans =(sizeof(arr)/sizeof(int));
   cout<<ans;
   cout<<endl;
   for(int i=0;i<9;i++){
   cout<<  arr[i];
   }
   return 0;
}