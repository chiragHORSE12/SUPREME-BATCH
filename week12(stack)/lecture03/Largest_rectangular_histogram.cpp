#include<iostream>
#include<vector>
#include<stack>
#include<limits>
using namespace std;
vector<int> next_smaller(vector <int> &v){
    stack<int> s;
    s.push(-1);

    vector<int> ans(v.size());

    for(int i=0;i < v.size();i++){
        int curr = v[i];
        while(s.top() != -1 &&v[s.top()] >= curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}

vector<int> previous_smaller(vector <int> &v){
    stack<int> s;
    s.push(-1);
    vector<int> ans(v.size());
    for(int i=v.size()-1;i>=0;i--){
        int curr = v[i];
        while(s.top() != -1 &&v[s.top()] >= curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}
int get_largest_rectungular(vector<int> &height){
    //step 1: previous samller element index
    vector<int> ans=next_smaller(height);
    //step 2: next smaller element index 
    vector<int> as2=previous_smaller(height);

    int maxarea=INT32_MIN;
    int size=height.size();
    for(int i=0;i<height.size()-1;i++){
        int length=height[i];
        if(as2[i] == -1){
            as2[i]=size;
        }
        int width=as2[i]-ans[i]-1;
        int area=length*width;
        maxarea=max(maxarea,area);
    }
    return maxarea;
}


int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    v.push_back(6);


    int ans=get_largest_rectungular(v);
    cout<<"The largest rectungular area is:"<<ans<<endl;

    return 0;
}
