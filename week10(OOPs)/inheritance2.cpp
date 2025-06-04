#include<iostream>
using namespace std;

class animal{
    private:
    int age;
    int weight;

};
class horse:public animal{
    //inside the class we can access
    public: 
    void print(){
        cout<<"we can access...private through public...."<<endl;
    }
};
class elephant:private animal{
    public:
    void grint(){
        cout<<"we can access...private through private...."<<endl;
    };
}
int main(){
    horse h1;
    h1.print();
    //out side the class we can't access
    cout<<h1.age;

}