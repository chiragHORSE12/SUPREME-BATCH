#include<iostream>
using namespace std;

class heap{
    public:

    int arr[20];
    int siz;

    void size(){
        siz=0;
    }

    void insert(int value){
        siz=siz+1;
        int index =siz;
        arr[index]=value;
        // int parentindex=index/2;

        while(index > 1){
            int parentindex=index/2;
            if(arr[parentindex] < arr[index]){
                swap(arr[index],arr[parentindex]);
                index=parentindex;
            }
            else{
                break;
            }
        }


    }

};

int main(){
    heap h;
    h.arr[0]=-1;
    h.arr[1]=100;
    h.arr[2]=50;
    h.arr[3]=60;
    h.arr[4]=45;
    h.arr[5]=25;
    h.siz=5;
    cout<<" printing the heap :"<<endl;
    for(int i=0;i<=h.siz;i++){
        cout<<h.arr[i]<<" ";
    }
    cout<<endl;
    h.insert(110);

    cout<<" printing the heap :"<<endl;
    for(int i=0;i<=h.siz;i++){
        cout<<h.arr[i]<<" ";
    }
return 0;    
}


