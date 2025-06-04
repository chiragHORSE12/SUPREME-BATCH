#include<iostream>
using namespace std;

class animal{
    public:
    void speek(){
        cout<<" speeking......."<<endl;
    }

};
class dog:public animal{
    //override
    public:
    void speek(){
         cout<<" barking...."<<endl;
    }

};
class horse:public animal{
    //override
    public:
    void speek(){
        cout<<" reakinnggggg...."<<endl;
        cout<<" english me neigh ... whinny"<<endl;
    }
};

int main(){
    animal a;
    a.speek();

    dog d;
    d.speek();

    horse h;
    h.speek();
    
return 0;
}