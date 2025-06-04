#include<iostream>
using namespace std;


class heap{

    public:
    int arr[30];
    int  size;

    void size(int size)
    {
        size=0;
    }

    void insert(int value){
        //phele size bada do
        size=size+1;
        int index=size;
        arr[index]=value;

        int parent_index=index/2;

        while(index >1){
            if(arr[index] >arr[parent_index]){
                swap(arr[index],arr[parent_index]);
                //update karege na index k value 
                index=parent_index;
            }

            else{
                break;
            }
        }
        // void dele(){
        //     //replace root node value with last node of tree 
        //     arr[1]=arr[size];
        //     size--;

        //     //put new root node to correct place 
        //     int index=1;
        //     int left=2*index;
        //     int right=2*index+1;

            


        // }
    }
};

int main(){
    heap h;
    h.arr[0]=-1;
    h.arr[1]=100;
    h.arr[2]=50;
    h.arr[3]=60;
    h.arr[4]=40;
    h.arr[5]=30;
    //h.siz=5;

    cout<<"printing the heap :"<<endl;
    for(int i=0;i<=h.size;i++){
        cout<<h.arr[i]<<" ";
    }
    cout<<endl;

}


void insert(int value){
        siz++;

        int index=siz;

        //int parent_index=index/2;

        while( index > 1){
            int parent_index=index/2;
            if(arr[index] > arr[parent_index]){
                swap(arr[index],arr[parent_index]);
                index=parent_index;
            }
            else{
                break;
            }
        }
    }