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
        cout<<"default constructor is called "<<endl;
        this->weight=0;
        this->age=0;
        this->name=""; 
    }
    //parameterized constructor
    animal(int age){
        cout<<"constructor with one parameter call"<<endl;
        this->age=age;

    }
    // parameterized constructor with 2 paramter

    animal(int age,int weight){
        cout<<"constructor with two parameter call"<<endl;
        this->age=age;
        this->weight=weight;
    }
    // parameterized constructor with 3 paramter
    animal(int age,int weight,string name){
        cout<<"constructor with three parameter call"<<endl;
        this->age=age;
        this->weight=weight;
        this->name=name;
    }
    //copy constructor
    animal(animal &obj){
        this->age=obj.age;
        this->name=obj.name;
        this->weight=obj.weight;
        cout<<"i am inside copy constructor"<<endl;
        }
};

int main(){
    animal a(10,15);
    animal* b=new animal();
    animal* c=new animal(10);
    animal* d=new animal(10,50,"DEVPUTRA");
    //cout<<"age of c is: "<<c.age<<endl
    //copy constructor
    //method 1 to use copoy constructor
    animal e = a;
    // method 2 to use copy constructor
    animal animal1(a);
}