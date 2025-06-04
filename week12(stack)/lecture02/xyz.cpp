#include<iostream>
#include<stack>
using namespace std;

void insert_sorted(stack <int> &s,int target){
    //empty then insert element
    if(s.empty()){
        s.push(target);
        return;
    }
    //find corrrect possition 
    if(s.top() >= target){
        s.push(target);
    }
    //else
    int temp=s.top();
    s.pop();
    //recursive call
    insert_sorted(s,target);
    //back ttrack
    s.push(temp);
}
void sort(stack <int> &s){
    if(s.empty()){
        return;
    }

    int target=s.top();
    s.pop();

    //rr
    sort(s);
    //2nd function
    insert_sorted(s,target);

    }

int main(){
    stack <int> s;
    s.push(12);
    s.push(54);
    s.push(20);
    s.push(30);
    s.push(59);
    s.push(44);
    s.push(4);
    s.push(65);
    
    sort(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}