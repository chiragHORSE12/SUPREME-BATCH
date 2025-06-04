#include<iostream> 
#include<queue>
using namespace std;

void interleaf(queue <int> &q){
    queue <int> q2;
    int n=q.size();
    int k=n/2;
    int count=0;
    //step 1: seprate two half
    while(! q.empty()){
        int element=q.front();
        q.pop();
        q2.push(element);
        count++;
        if (count==k){
            break;
        }
    }
    //step 2: inter leaf kar do 
    while(! q.empty() && !q2.empty()){
        int first=q2.front();
        q2.pop();
        q.push(first);

        int second=q.front();
        q.pop();
        q.push(second);
    }
    //step 3: odd length wale case ko handle kar n k leye 
    if(! q.empty()){
        int c=q.front();
        q.pop();
        q.push(c);
    }
}

int main(){
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    //q.push(80);

    interleaf(q);
    while(! q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}

