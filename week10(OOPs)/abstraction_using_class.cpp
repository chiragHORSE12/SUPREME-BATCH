#include<iostream>
using namespace std;

class abc{
    private:
    int a;
    char c;

    public:
    void setmyvalue(int x,char ch){
        a=x;
        c=ch;
    }

    void getmyvalue(){
        cout<<"number is "<<a<<endl;
        cout<<"character is"<<c<<endl;
    }
};

int main(){

     abc a;
      a.setmyvalue(10,a);
      a.getmyvalue();
      return 0;
}