#include<iostream>
using namespace std;

class parman{
    public:
    int val;

    void operator+(parman& obj){
        int value1=this->val;
        int value2=obj.val; 
        cout<<(value2-value1)<<endl;

    }

};

int main(){
    parman object1,object2;
    object1.val=10;
    object2.val=7; 
    //this should print diiference between them
    object1 +object2;
    return 0;
}