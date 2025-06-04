#include<iostream> 
using namespace std;

int main(){

    int arr[]={10,12,14,16,18};
    cout<<arr<<endl;   //baseaddress
    cout<<&arr<<endl;  //baseaddress
    cout<<arr[0]<<endl; //value as 10
    cout<<&arr[0]<<endl;//baseaddress

    int * p= arr;
    cout<< p<<endl; //print base address
    cout<<* p<<endl;// print value whose address is store in cointainer p
    cout<<&p<<endl;// address of p
    return 0;

}