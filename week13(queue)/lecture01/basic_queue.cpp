#include<iostream>
#include<queue>
using namespace std;

int main(){
    //queue creation
    queue <int> q;

    //insertion of element
    q.push(5);
    q.push(15);
    q.push(53);

    //size of queue
    cout<<"size of queue is :"<<q.size()<<endl;

    //deletion of element
    q.pop();

    //size of queue 
    cout<<"size of queue is :"<<q.size()<<endl;

    return  0;
}
