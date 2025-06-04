#include<iostream>
#include<stack>
using namespace std;

// function to print stack
void print(stack <int> s ){
    cout<<"element of stack are :";
    while( !s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main(){
    //stack creation 
    stack <int> s;

    //insertion in stack
    s.push(12);
    s.push(33);
    s.push(22);
    s.push(1);
    s.push(13);
    s.push(12);


    //remove 
    s.pop();

    //check element of top
    cout<<"top element is :"<<s.top()<<endl;

    // check the size of stack
    cout<<"size of stack is :"<<s.size()<<endl;

    print(s);

    return 0;
}
