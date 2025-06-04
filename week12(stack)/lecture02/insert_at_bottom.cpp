#include<iostream>
#include<stack>
using namespace std;

void insert(stack <int> &s,int element){
    if(s.empty()){

        s.push(element);
        return;
    }
    
    //ek case solve kar do 
    int temp=s.top();
    s.pop();

    //recursive call laga do 
    insert(s,element);

    //back track
    s.push(temp);
}


int main(){
    stack<int> s;
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(10);
    s.push(80);
    int target=s.top();
    s.pop();
    insert(s,target);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}