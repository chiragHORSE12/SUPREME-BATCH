#include<iostream>
using namespace std;
#define PI 3.1415
#define MAXX(x,y) (x > y ? x : y)

float areaofcircle(float r){
    return PI*r*r;
}
float circumfrance(float r){
    return 2*PI*r;
}
int fun(int a,int b){
    
    return MAXX(a,b);
}
int fun1(int a,int b){
    return MAXX(a,b);
}


int main(){
    cout<<"area of circle"<<" "<<areaofcircle(5.21);
    //cout<<fun1(10,2)<<endl;
    cout<<fun1(11,10)<<endl;
}