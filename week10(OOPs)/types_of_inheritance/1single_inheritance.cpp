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
class scorpio:public car{

};

int main(){
    scorpio babbarwali;
    babbarwali.speedup();
    babbarwali.breakmar();
}