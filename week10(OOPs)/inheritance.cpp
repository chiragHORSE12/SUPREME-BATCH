#include<iostream>
using namespace std;

class animal{
    public:
    int age;
    int weight;


    void eat(){
        cout<<"eating.... "<<endl;
    }
};
class dog:public animal{

};
class elephant:protected animal{

//to solve this problem hum es h m print kara sakte h
//we can access this" inside the class"
    public:
    void print(){
    cout<<this->age<<endl;
    }
};
int main(){
    //public to public ka khel
     dog d1;
     d1.eat();
     //public to private kja khel
     elephant e1;
     //cout<< e1.age<<endl;
    //ye wala error show karega 
    e1.print();
  return 0;
}

