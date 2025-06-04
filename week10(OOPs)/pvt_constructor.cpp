#include<iostream>
using namespace std;

class box{

    int width;
    //c tor
    box(_val) : width(_val){}; 

    public :
    void set_width(int _val)
    {
        width =_val;
    }
    int get_width()const
    {
        return width;

    }
    friend class boxfactory;

}; 

  class boxfactory{
    int count;
    public:
    box getbox(int _val){
        ++count;
        return box(_val);
    }
};

int main(){
    boxfactory bfact;
    box b=bfact.getbox(5); 
    cout<<b.get_width()<<endl;
    return 0;

}