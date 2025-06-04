#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> ar(10);
    cout<<"size of vector :";
    cout<<ar.size()<<endl;
    cout<<"capacity of vector:" ;
    cout<<ar.capacity()<<endl;
    ar.push_back(12);
    vector<int> cr(10);
    cout<<cr.empty()<<endl;
    ar.push_back(12);
    cout<<ar.empty()<<endl;
    
    
    return 0;
    
}