#include<iostream>
using namespace std;

class maths{
    public:
    int sum(int a,int b){
        cout<<"I am first one "<<endl;
        return a + b;

    }
    int sum(int a,int b,int c){
        cout<<"I am second one "<<endl;
        return a + b + c;
        

    }
    int sum(int a,float b){
        cout<<"I am third one "<<endl;
        return a + b;
        

    }
};

int main(){
    maths obj;
    cout << obj.sum(1,3)<<endl;
    cout << obj.sum(1,3,5)<<endl;
    cout << obj.sum(3,5.21f)<<endl;

    return 0;
}
