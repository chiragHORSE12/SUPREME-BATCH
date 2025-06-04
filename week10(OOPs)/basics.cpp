#include<iostream>
using namespace std;

class animal{
    //state
    int weight;
     public:
     string name;
     int age;

    //behavior
    void eat(){
        cout<<"eating....."<<endl;

    }

    void sleep(){
        cout<<"sleepingggg..."<<endl;

    }
    int setweight(int weight){
        this->weight=weight;
    }
    int getweight(){
        return weight;
    }
    //default constructor
    animal(){
        cout<<"constructor is called "<<endl;
        this->weight=0;
        this->age=0;
        this->name=""; 
    }
    //parameterized constructor
    animal(int age){
        cout<<"constructor call"<<endl;
        this->age=age;

    }

}; 

int main(){
    animal horse;
    horse.name="DEVPUTRA";
    horse.age =23;
    cout<<"Name of horse is :"<<horse.name<<endl;
    cout<<"Age of horse is :"<<horse.age<<endl;
    horse.eat();
    horse.sleep();
    horse.setweight(10);

    cout<<"weight of your horse is : "<<horse.getweight()<<endl;
    
    cout<<"the size of empty class is: "<<sizeof(animal)<<endl;
}