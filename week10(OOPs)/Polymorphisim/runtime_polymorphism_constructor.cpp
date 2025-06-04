#include<iostream>
using namespace std;

class animal{
    public:
    int age ;
    int weight;
    string name;
      animal(){
        cout<<"i am inside animal constructor!!"<<endl;
    }

     void speek(){
        cout<<"speekinggg..."<<endl;
    }
};
class dog:public animal{
    public:
     dog(){
        cout<<"i am inside dog constructor!!"<<endl;
    }
    void speek(){
        cout<<"barkingggg...."<<endl;
    }
};
int main(){
    animal* a=new animal();

    dog* d=new dog();

    animal* a1=new dog();
  
    dog* d1=(dog*)new animal();

    return 0;
}