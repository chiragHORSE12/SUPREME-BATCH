#include<iostream>
using namespace std;


class cirqueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    cirqueue(int size){
        this->size=size;
        arr=new int [size];
        front=-1;
        rear=-1;

    }

    void push(int data){
        //overflow condition

        if(front == 0 && rear == size -1){
            cout<<" circular queue is full !!"<<endl;

        }
        // single element k case 
        else if(front == -1 & rear == -1){
            front=rear= 0;
            arr[rear]=data;
        }
        //circular queue create kar do
        else if(rear == size -1 && front !=0){
            rear=0;
        }
        //circular queue overflow check
        else if( front -1==  rear){
            cout<<"circular queue is over flow !"<<endl;
        }
        else{
            rear++;
            arr[rear]=data;
        }
    }

    void pop(){
        //check under flow 
        if(front == -1){
            cout<<"circular stack is under flow "<<endl;
        }
        //single element 
        else if (front == rear){
            arr[front]=-1;
            front = 0;
            rear = 0;
        }
        else{
            arr[front]= -1;
            front++;
        }
    }

    int getfront(){
        return arr[front];
    }

    int getrear(){
        return arr[rear];
    }
    int size_(){
        return rear-front+1;
    }
};
int main(){
    cirqueue q(4);
    q.push(12);
    //cout<<q.size_()<<endl;
    //cout<<"front element is: "<<q.getfront()<<endl;
    q.push(4);
    //cout<<q.size_()<<endl;
    q.pop();
    q.push(8);
    cout<<q.size_()<<endl;
    cout<<"front element is: "<<q.getfront()<<endl;
    q.pop();
    q.push(2);
    cout<<"rear element is : "<<q.getrear()<<endl;
    q.push(16);
    cout<<q.size_()<<endl;
    //q.push(14);
    return 0;


}