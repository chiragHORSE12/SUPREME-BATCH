#include<iostream>
using namespace std;

class abc{
    public:

    int x,y;
    abc():x(0),y(0){}
    static void print(){
        cout<<"i am inside static fubnction "<<endl;
    }
};
int main(){
    abc obj1;
    abc::print();
    abc obj2;
    abc::print();
    return 0;
}