#include<iostream>
using namespace std;

class queue{
    public :
    int size;
    int front;
    int rear;
    int *arr;

    queue(int size){
        this->size=size;
        arr=new int[size];
        front =0;
        rear =0;
    }

    void push(int data){
        if(rear == size){
            cout<<" queue is over flow !"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }

    void pop(){
        if(rear == front){
            cout<<"queue is under flow !"<<endl;
        }
        else{
            arr[front]=-1;
            front++;
            if(rear == front){
                rear =0;
                front=0;
            }
        }

    }

    int getfront(){
        if(rear == front){
            cout<<"queue is under flow !"<<endl;
        }
        else{
            return arr[front];
        }
    } 
    
    bool isempty(){
        if( front == 0 && rear==0){
            return true;
        }
        else{
            return false;
        }
    }
    int getsize(){
        return rear-front;
    }

};

int main(){
    queue q(6);
    q.push(9);
    q.push(7);
    q.push(2);
    q.push(5);

    cout<<"size of queue is :"<<q.getsize()<<endl;

    cout<<"front element is: "<<q.getfront()<<endl;
    q.pop();
    cout<<"front element is: "<<q.getfront()<<endl;
    q.pop();
    cout<<"front element is: "<<q.getfront()<<endl;
    q.pop();
    cout<<"size of queue is :"<<q.getsize()<<endl;
    q.pop();
    q.pop();
    cout<<"the queue is empty :"<<q.isempty()<<endl;
    q.push(11);
    cout<<"the queue is empty :"<<q.isempty()<<endl;
    return 0;
}