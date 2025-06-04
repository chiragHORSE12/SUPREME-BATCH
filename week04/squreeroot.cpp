#include<iostream>
using namespace std;

int squareroot(int n){
    int start=0;
    int end=n-1;
    int target=n;
    int mid=start+(end-start)/2;
    int ans;
    while(start<=end){
        if(mid*mid==target){
            return mid;
        }
        else if(mid*mid<target){
            ans=mid;
            start=mid+1;
            
        }
        else if(mid*mid>target){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int ans=squareroot(n);
    int preshipson;
    cout<<"enter the preshipsion you want:";
    cin>> preshipson;
    float answer;
    
    float step=0.1;
    for(int i=0;i< preshipson;i++){
        for(float j=ans;j*j<=n;j=j+step){
                answer=j;
                }
            step=step/10;
    }


    cout<<"the squaree root of" <<n<<" "<<"is"<<" "<<answer;
    return 0;


}