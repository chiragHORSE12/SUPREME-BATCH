#include<iostream>
using namespace std;

int main(){
    //1.const with variable
    int aa=5;
    const int ba=10;
    //intialize can be done 
    //we cant re assign the value 
    //b=13;
    cout<<aa<<endl;
    cout<<ba<<endl;
    //2,const with pointer
    int* arr=new int(2);//const data || non const pointer
    //*arr =200 //cant change the content of pointer
    int brr=20;//example: const data || non const pointer
    arr =&brr;//pointer it self can be re-assigined
    cout<<* arr<<endl;
    // constant pointer ,but non constant variable
    int *const a=new int (2);
    cout<<*a<<endl;
    *a=20;
    cout<<*a<<endl;
    int b=200;
    //a=&b; nhi chalega const pointer
    cout<<*a<<endl;

    //const pointer and const variable
    const int *bb=new int (100);
    cout<<bb<<endl;
    //pointer change kar n k try 
    //*bb=200;
    //cout<<*bb<<endl;
    int c=22;
    //variable change kar n k try
    //bb= &c;
    cout<<bb<<endl;


}