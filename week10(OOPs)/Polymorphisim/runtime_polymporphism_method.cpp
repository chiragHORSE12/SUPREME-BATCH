#include<iostream>
using namespace std;

class animal{
    public:
    int age ;
    int weight;
    string name;

     void speek(){
        cout<<"speekinggg..."<<endl;
    }
};
class dog:public animal{
    public:
    void speek(){
        cout<<"barkingggg...."<<endl;
    }
};

int main(){
    animal a;
    a.speek();

    dog d;
    d.speek();

    //dynamic objr=ect creation  have 4 case
    //case1
    animal* a1=new animal();
    a1->speek();

    //cases2
    dog* d1=new dog();
    d1->speek();

    //case3  #up casting
    animal* a2 = (animal*)new dog();
    a2->speek();

    //case4  #down casting
    dog* d2 =(dog*)new animal();
    d2->speek();
//without virtual keyword
//speekinggg...
//barkingggg....
//speekinggg...
//barkingggg....
//speekinggg...
//barkingggg....
    
    //in the above all the 4 cases it will print object method 
    //if we want to pring objects method then we have parent class method as
    //virtual void speek()

//output with virtual key word output
//speekinggg...
//barkingggg....
//speekinggg...
//barkingggg....
//barkingggg....
//speekinggg...
return 0;
}
