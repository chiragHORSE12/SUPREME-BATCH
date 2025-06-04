#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack <int> &s,int element){
    if(s.empty()){
        s.push(element);
        return;
    }
    
    //ek case solve kar do 
    int top_element=s.top();
    s.pop();

    //recursive call laga do 
    insertatbottom(s,element);

    //back ttrack
    s.push(top_element);

}

void reverse(stack <int> &s){
    //base case 
    if(s.empty()){
        return;
    }
    //1 chota case
    int temp=s.top();
    s.pop();
    //recursive call
    reverse(s);
    //dusre wale ko call kara
    insertatbottom(s,temp);

}

int main(){
    stack <int> s;
    s.push(12);
    s.push(20);
    s.push(30);
    s.push(44);
    s.push(54);
    s.push(59);
    s.push(65);
    s.push(78);
    
    
    reverse(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
