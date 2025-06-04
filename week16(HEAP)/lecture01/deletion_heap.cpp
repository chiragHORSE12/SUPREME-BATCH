#include<iostream>
using namespace std;

class heap {
    public:
    int arr[30];
    int siz;

    void size(){
        int siz=0;
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

    void del(){
        //replacde last node with first node
        arr[1]=arr[siz];
        siz--;

        // start comparing  parent node with child node
        int index=1;
        while(index <siz){
            int left=2*index;
            int right=2*index+1;
            // index ko largest bana deya h
            int largest=index;
     
            // check keya k left wale value largest se bade to nhi 
            if(left < siz && arr[largest] <arr[left] ){
                largest =left;
            }
            //check keya k right wale value largest se bade to nhi
            if(right < siz && arr[largest] < arr[right]){
                largest=right;
            }
            //  check index value h largest h bade h
            if (largest == index){
                return;
            }
            else{
                //swap keya largedt ko index k sath
                swap(arr[largest],arr[index]);
                //update k value 
                index=largest;
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
   // h.insert(78);

    cout<<" printing the heap :"<<endl;
    for(int i=0;i<=h.siz;i++){
        cout<<h.arr[i]<<" ";
    }
    cout<<endl;
    h.del();
    cout<<" printing the heap :"<<endl;
    for(int i=0;i<=h.siz;i++){
        cout<<h.arr[i]<<" ";
    }

return 0;    
}