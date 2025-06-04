#include<iostream> 
using namespace std;

class dou_queue{
    public:
    int size;
    int front ;
    int rear;
    int *arr;

    dou_queue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    void push_rear(int data){
         //overflow condition

        if(front == 0 && rear == size -1){
            cout<<" circular queue is full !!"<<endl;
            return;
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
    void push_front(int data){
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
        else if(front == 0 && rear != 0){
            front=size-1;
        }
        else{
            front--;
            arr[front]=data;
        }
    } 
    void pop_front(){
        //check under flow 
        if(front == -1){
            cout<<"circular stack is under flow "<<endl;
        }
        //single element 
        else if (front == rear){
            arr[front]=-1;
            front = -1;
            rear = -1;
        }
        else{
            arr[front]= -1;
            front++;
        }
    } 

    void pop_back(){
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
        //rear element ko zeo se last element par bejdo
        else if(rear == 0){
            rear=size-1;
        }
        else{
            arr[rear]= -1;
            front--;
        }
    } 
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    dou_queue q(6);
    q.push_rear(10);
    q.push_rear(20);
    q.push_rear(30);
    q.push_rear(40);
    q.print();
    //q.pop_back();
    q.print();
    q.pop_front();
    q.print();
    q.pop_front();
    q.push_front(58);
    q.print();
    
return 0;
}