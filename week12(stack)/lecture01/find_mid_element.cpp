#include<iostream>
#include<stack>
using namespace std;

int mid_element(stack<int>& s,int total_size){
    if(s.size()== 0){
        //return -1;
        cout<<"no element present in stack!";
    }
    if(s.size() == (total_size/2)+1){
        return s.top();
    }
    //1 chota kam
    int temp=s.top();
    s.pop();

    //recursive call 
    mid_element(s,total_size);

}


int main(){
    stack <int> s;
    // s.push(12);
    // s.push(22);
    // s.push(32);
    // s.push(42);
    // s.push(52);
    // s.push(62);
    // s.push(72);
    // s.push(25);
    // s.push(2);

    int size=s.size();
    cout<<size<<endl;

    int ans=mid_element(s,size);
    cout<<"middle element is :"<<ans<<endl;
return 0;
}
