#include<iostream>
using namespace std;

class shape{
    public:
    int area (int a,int b){
        return a*b;
    }
};
class rectangle:public shape{
    public:
    int area (int length,int breadth) {
        cout<<"entered length is "<<length<<endl;
        cout<<"entered breadth is "<<breadth<<endl;
        return length*breadth;

    }
};
class triangle:public shape{
    public:
    int area(int base,int height){
        cout<<"entered base is :"<<base<<endl;
        cout<<"entered height is:"<<height<<endl;
        return 0.5*base*height;
    }
};
class circle:public shape{
    public :
    int area(int radius){
        cout<<"entered radius is :"<<radius<<endl;
        return 3.14*radius*radius;
    }
};

int main(){
    shape s;
    cout<<s.area(12,2)<<endl;
    rectangle r;
    cout<<r.area(10,5)<<endl;
    triangle t;
    cout<<t.area(10,5)<<endl;
    circle c;
    cout<<c.area(14)<<endl;
    return 0;

}