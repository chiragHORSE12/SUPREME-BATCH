#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    //min heap 
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(1);
    pq.push(5);
    pq.push(4);
    pq.push(9);
    pq.push(10);
    pq.push(3);

    cout<<"top elemnt is:"<<pq.top()<<endl;
    pq.pop();
    cout<<"top elemnt is:"<<pq.top()<<endl;
    pq.pop();
    cout<<"top elemnt is:"<<pq.top()<<endl;
    pq.pop();
    cout<<"our queue is empty:"<<pq.size()<<endl;;
    cout<<"top elemnt is:"<<pq.top()<<endl;
    pq.pop();
    cout<<"top elemnt is:"<<pq.top()<<endl;
    pq.pop();
    cout<<"top elemnt is:"<<pq.top()<<endl;
    pq.pop();
    cout<<"our queue is empty:"<<pq.empty();
}