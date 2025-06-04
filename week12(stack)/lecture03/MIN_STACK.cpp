#include<iostream>
#include<vector>
using namespace std;

class minstack{
    public:
    vector<pair<int,int>> st;

    minstack(){
    
    }


    void push(int val){
        if(st.empty()){
            pair<int,int> p= make_pair(val,val);
            st.push_back(p);
        }
        else{
            pair<int,int> p;
            p.first=val;
            p.second=min(val,st.back().second);
            st.push_back(p);

        }
    }

    void pop(){
        st.pop_back();
    }
        
    int top(){
        return st.back().first;
    }
    int getmin(){
        return st.back().second;
    }
};
int main(){

    minstack m1;//= new minstack();
    m1.push(4);
    m1.push(7);
    cout<<"top element is: "<<m1.top()<<endl;
    cout<<"minimun element is :"<<m1.getmin()<<endl;
    m1.push(8);
    m1.push(3);
    cout<<"top element is: "<<m1.top()<<endl;
    cout<<"minimun element is :"<<m1.getmin()<<endl;
    return 0;

    
}