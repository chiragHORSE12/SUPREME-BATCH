#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>

class Bird{
    public:
    virtual void eat() =0;
    virtual void fly() =0;
    
};
class sparrow:public Bird{
    public:
    void eat(){
        std::cout<<"sparrow is eating \n";
    }
    void fly(){
        std::cout<<"sparrow is flying \n";
    }
};
class eagle:public Bird{
    public:
    void eat(){
        std::cout<<"sparrow is eating \n";
    }
    void fly(){
        std::cout<<"sparrow is flying \n ";
    }

};