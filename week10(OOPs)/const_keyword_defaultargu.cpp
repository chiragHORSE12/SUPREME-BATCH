#include<iostream>
using namespace std;

class abc{
    int x;
    int *y;
    int z;
    public:
    abc(int a,int b,int c=20){
        x=a;
        y=new int(b);
        z=c;

    }
    public:
    int get_X()const{
        return x;
    }
   // void set_X(int value) {
        //x=50
      //  x=value;
    //}
    int get_Y()const{
        return *y;
    }
    //void set_Y(int value){
        //x=50
        //*y=value;
    //}
    void get_z() const{
        return z;
    }
};

void print(const abc &a){
    cout<<a.get_X()<<" "<<a.get_Y()<<" "<<a.get_z()<<endl;
}
int main(){
    abc a(12,45);
    print (a);
    
    return 0;
}