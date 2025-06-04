#include<iostream>
using namespace std;

class stack {
     public:

     int top;
     int siize;
     int*arr;

     stack(int siize){
        arr=new int[siize];
        this->siize=siize;
        top=-1;
    }

     //behavior

    void push(int data){
        // check wether the space avialable in stack or not
        if(siize - top > 1){
            //space available
            top++;
            arr[top]=data;
        }
        else{
            //space nopt avilable 
            cout<<" stack over flow!!!!!!!!"<<endl;
        }
    }
    void pop(){
        if(top == -1){
            cout<<" stack under flow !!, can't delete element "<<endl;
        }
        else{
            top--;
        }
    }
    int gettop(){
        if(top == -1){
             cout<<" there is no element in stack !! "<<endl;
        }
        else{
            return arr[top];
        }
    }
    int size(){
        return top+1;
    }
    bool isempty(){
        if( top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    stack s(10);
    //insert value in stack
    s.push(10);
    s.push(20);
    s.push(90);
    s.push(50);
    print all element in stack
    cout<<" the element of stack are :"<<endl;
    while(!s.isempty()){
        cout<< s.gettop() <<" "; 
        s.pop();
    }
    cout<<endl;

    cout<<s.size()<<endl;
    //cout<<s.top()<<endl;
    return 0;
}