#include<iostream>
using namespace std;

class heap{
    public:

    int arr[20];
    int size;

    heap(){
        size=0;
    }

    void insert(int value){
        // size bada na padege naya element insert kar n k leye
         size=size+1;
        int index=size;
        arr[index]=value;
        
        // es value ko shi jagah (correct possition) par rakaha na h 

        while( index > 1){
            int parent_index=index/2;

            if(arr[index] >arr[parent_index]){
                swap(arr[index],arr[parent_index]);
                //updte karna padega index  ko 
                index=parent_index;
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
    h.arr[4]=40;
    h.arr[5]=30;
    h.size=5;

    cout<<"printing the heap :"<<endl;
    for(int i=0;i<=h.size;i++){
        cout<<h.arr[i]<<" ";
    }
    cout<<endl;

    h.insert(110);
    cout<<"printing the heap :"<<endl;
    for(int i=0;i<=h.size;i++){
        cout<<h.arr[i]<<" ";
    }
    cout<<endl;


}