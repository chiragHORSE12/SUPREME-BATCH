#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class node{
    public:
    char ch;
    int count;

    node(char c,int freq){
        ch=c;
        count=freq;
    }
};

class compare{
    public:
    
    bool operator()(node a,node b){
        return a.count < b.count;
    }
};

string longestDiverseString(int a, int b, int c) {
        priority_queue<node,vector<node>,compare> maxheap;
        string ans="";
        if(a > 0){
            node temp('a',a);
            maxheap.push(temp);
        }
        if(b > 0){
            node temp('b',b);
            maxheap.push(temp);
        }
        if(c >0 ){
            node temp('c',c);
            maxheap.push(temp);
        }
        while(maxheap.size() > 1){
            node first=maxheap.top();
            maxheap.pop();

            node second=maxheap.top();
            maxheap.pop();

            if(first.count >= 2){
                ans +=first.ch;
                ans +=first.ch;
                first.count -= 2;
            }
            else{
                ans +=first.ch;
                first.count--;
            }

            if(second.count >=2 && second.count >first.count){
                ans +=second.ch;
                ans +=second.ch;
                second.count -=2;
            }
            else{
                ans +=second.ch;
                second.count --;
            }
            if(first.count >0){
                maxheap.push(first);
            }
            if(second.count > 0){
                maxheap.push(second);
            }
        }
        if(maxheap.size()==1){
            node temp = maxheap.top();
            maxheap.pop();

            if(temp.count >= 2){
                ans +=temp.ch;
                ans +=temp.ch;
                temp.count -= 2;
            }
            else{
                ans +=temp.ch;
                temp.count--;
            }
        }
    return ans;    
}

int main(){
    int a,b,c;
    cout<<"enter the value of a b c "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    string ans=longestDiverseString(a,b,c);

    cout<<"longestDiverseString is : "<<ans<<endl;
    return 0;
}