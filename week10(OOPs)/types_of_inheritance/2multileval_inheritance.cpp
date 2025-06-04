#include<iostream>
using namespace std;

class car{
    public:
    int age;
    int weight;
    
    void speedup(){
        cout<<"speeding up..."<<endl;
    }
    void breakmar(){
        cout<<"break mardiya h!!"<<endl;
    } 
};
class scorphio:public car{

};
class fortuner:public car{

};
int main(){
    scorphio s11;
    s11.speedup();
    s11.breakmar();

    fortuner crusher;
    crusher.speedup();
    crusher.breakmar(); 
return 0;
    
}