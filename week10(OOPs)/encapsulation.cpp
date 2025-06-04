#include<iostream>
using namespace std;

class animal{
    private:
     int age;
     int weight;
    
    public:
    void eat(){
        cout<<"eatingg....."<<endl;
    }
    int getweight(){
        return this->weight;
    }
    void setweight(int weight){
        this->weight=weight;
    }
};


int main(){
    //cout<<"private encapsulation..."<<endl;
    //cout<<"100% encapsulation ho gaya h ....."<<endl;
    animal horse;
    horse.setweight(100);
    cout<< "horse weight is : "<<horse.getweight()<<endl;
    cout<<"private encapsulation..."<<endl;
    cout<<"100% encapsulation ho gaya h ....."<<endl;
    return 0;
}