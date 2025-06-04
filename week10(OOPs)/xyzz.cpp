#include<iostream>
using namespace std;

class abc{
    int x;
    int *y;
    public:
    abc(){
        x=0;
        y=new int(0);

    }
    public:
    int get_X()const{
        return x;
    }
    void set_X(int value) {
        //x=50
        x=value;
    }
    int get_Y()const{
        return *y;
    }
    void set_Y(int value){
        //x=50
        *y=value;
    }
};
int main(){
    abc a;
    cout<<a.get_X()<<endl;
    cout<<a.get_Y()<<endl;
    return 0;
}