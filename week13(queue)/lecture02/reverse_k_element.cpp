#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reversek(queue <int> &q,int k){
   
    int n=q.size();
    stack<int> s;
    int count=0;

    //step 1: queue k kelement ->stack
    while(! q.empty()){
    int element=q.front();
    q.pop();
    s.push(element);
    count++;
    if(count == k){
        break;
    }
    }

    //step 2 stack k kelement ->queue m
    while(! s.empty()){
         int t=s.top();
         s.pop();
        q.push(t);
    }
    // step 3: n-k element 
    count =0;
    while(!q.empty()& n-k!=0){
        int temp=q.front();
        q.pop();
        q.push(temp);
        count++;
        if(count == n-k){
            break;
        }
    }

}

int main(){
    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);
    reversek(q,3);
    while(! q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}