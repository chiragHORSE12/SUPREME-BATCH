#include<iostream>
#include<vector>
using namespace std;
void merge(int arr1[],int arr2[],int a,int b,int arr[]){
   int i=0;
   int j=0;
   int k=0;
   
   while(i < a && j < b){
      if(arr1[i] < arr2[j]){
         arr[k] =arr1[i];
         k++;
         i++;
      }
      else{
         arr[k] =arr2[j];
         k++;
         j++;
      }
   }
   while( i < a){
      arr[k] =arr1[i];
      k++;
      i++;

   }
   while( j < b){
      arr[k] =arr2[j];
         k++;
         j++;
   }
  return ;
}


int main(){
   int arr1[]={1,3,5,7,9,11};
   int arr2[]={2,4,6};
   int a=sizeof(arr1)/sizeof(int);
   int b=sizeof(arr2)/sizeof(int);
   int arr [a+b];
   cout<<a<<" "<<b<<endl;
   merge(arr1,arr2,a,b,arr);
   for(int i=0;i<(a+b);i++){
      cout<<arr[i]<<" ";
   }
    
    return 0;
}