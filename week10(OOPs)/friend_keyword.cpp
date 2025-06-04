#include<iostream>
using namespace std;

class a{
    private:
    int x;

    public:
    a(int val): x(val){

    }
    void setX(int val) {
        x=val;
    }
    int getX() const{
        return x;
    }
    friend class b;
    //also we can create friend function which can also 
    //access all the private element of the friend class 
};
class b{
    public:
    void print(const a&A ){
        cout<<A.getX()<<endl;
    }
};

int main(){
    a A(10);
    b B;
    B.print(A);
    return 0;
}