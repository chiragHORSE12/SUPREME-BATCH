#include<iostream>
using namespace std;

void func (int a[], int size){
    a[0]=10;
    a[1]=20;
    a[2]=30;
    cout<<a[0] <<" ";
}
int main(){
    int a[]={1,2,3};
    int size =3;
    func (a,size );
    return 0;
    }