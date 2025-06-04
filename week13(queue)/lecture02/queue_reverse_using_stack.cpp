#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverse(queue <int> &q){
    stack <int> s;
    //step 1:put all element of q to stack
    while(! q.empty()){
        int element=q.front();
        q.pop();

        s.push(element);

    }

    //step 2:
    while(! s.empty()){
        int element=s.top();
        s.pop();

        q.push(element);
    }
}

int main(){
    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    reverse(q);
    while(! q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}