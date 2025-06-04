#include<iostream>
#include<vector>
using namespace std;
int findelement(vector <int > arr,int  target){
    int s=0; 
    int e=sizeof(arr);
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==target)
         return mid;
        if(mid-1>=0&&arr[mid-1]==target)
         return mid-1;
        if(mid+1<=e&&arr[mid+1]==target)
         return mid+1;
        
          if(target>arr[mid]){
            s=mid+2;
          }
          else{
            e=mid-2;
          }
        mid=s+(e-s)/2;
    }
    return -1;   
}
int main (){
    
    vector <int> arr {10,3,40,20,50,80,70};
    int target=80;
    int ans=findelement(arr,target);
    cout<<"element is present at index number"<<" "<<ans;
return 0;
}
