#include<iostream>
#include<queue>
using namespace std;

void reverse(queue <int> &q){
    if(q.empty()){
        return;
    }

    //step 1
    int t=q.front();
    q.pop();

    //step 2
    reverse(q);

    //step 3
    q.push(t);
}

int main(){
    queue <int> q;
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