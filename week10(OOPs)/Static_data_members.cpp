#include<iostream>
using namespace std;

class abc{
    public:
    
    static int x;
    static int y  ;

    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
    
    
};
  // static member ese  declare kar te h 
   //verna error show kar ta h 
int abc::x;
int abc::y;

int main(){
    abc obj1;
    obj1.x=2;
    obj1.y=3;
    obj1.print();
    abc obj2;
    obj2.x=80;
    obj2.y=90;
    obj1.print();
    obj2.print();
    return 0;
}