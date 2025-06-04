#include<iostream>
using namespace std;
int x=100;//Declare Global variable 

int main(){
    x=110;
    int x=10;

    cout<<x<<endl;//local variable access
    cout<<::x<<endl;//global variable access ::
    {
        //most local variable access karega
        int x=1002;
        cout<<x<<endl;
        cout<<::x<<endl;//global variable access karega 
    }
    return 0;
}