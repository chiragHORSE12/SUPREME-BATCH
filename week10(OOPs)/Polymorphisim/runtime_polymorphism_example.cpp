#include<iostream>
using namespace std;

class animal{
    public:
    int age;
    int weight;

    animal(){
        cout<<"i am inside animal constructor"<<endl;
    }
};
class horse:public animal{
    public:
    horse(){
        cout<<"i am inside  horse constructor "<<endl;
    }

};
class marwadi:public horse{
    public:
    marwadi(){
        cout<<"i am inside marwadi constructor "<<endl;
    }
};

int main(){
    //marwadiclass  ka parent h horseclass h 
    //horseclass ka parent h animalclass
    animal* a = new animal();
    animal* b=new horse();
    animal* c=new marwadi();
    horse* a1=(horse*)new animal(); 
    horse* b1=new horse();
    horse* c1=new marwadi();
    marwadi* a2=(marwadi*)new animal(); 
    marwadi* b2=(marwadi*)new horse();
    marwadi* c2=new marwadi();
    return 0;
     
}