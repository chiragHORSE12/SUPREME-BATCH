#include<iostream>
using namespace std;

class stack {
     public:

     int top1;
     int top2;
     int siize;
     int*arr;

     stack(int siize){
        arr=new int[siize];
        this->siize=siize;
        top1=-1;
        top2=siize;
    }
    //behaviour
    void push1(int data){
        if(top2-top1 > 1){
            top1++;
            arr[top1]=data;
        }
        else{
            cout<<"stack overflow !!!"<<endl;
        }

    } 
    void pop1(){
        if(top1 == -1){
            cout<<"under flow !!"<<endl;
        }
        else{
        top1--;
        } 

    }
    void push2(int data){
        if(top2-top1 > 1){
            top2--;
            arr[top2]=data;
        }
        else{
            cout<<"stack overflow !!!"<<endl;
        }

    }
    void pop2(){
        if(top2 == siize)
        top2++;
    }
    void print(){
    cout<<"top 1:"<<top1<<endl;
    cout<<"top 2:"<<top2<<endl;
    for(int i=0;i < siize;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}
};
int main(){
    stack s(6);
    s.push1(10);
    s.print();
    s.push1(14);
    s.print();
    // s.push1(32);
    // s.print();
    // s.push1(64);
    //s.print();
    s.push2(1);
    s.print();
    s.push2(8);
    s.print();
    s.push2(86);
    s.print();
    s.push2(98);
    s.print();
    // s.push2(64);
    // s.print();
    // s.push2(81);
    // s.print();
    //s.push1(27);
    return 0;


}