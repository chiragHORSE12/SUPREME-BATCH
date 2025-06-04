#include<iostream>
using namespace std;

class abc{
    public:
    int x;
    int *y;
    abc (const abc &obj){
        x=obj.x;
        y=new int(*obj.y);

    }

    abc (int _x,int _y): x(_x),y(new int (_y)){}
    void print()const
    {
         //printf("x:%d\ny:%p\n*y:%d\n\n",x,&y,*y);
        //cout<<endl;
        cout<<" value of x :"<<x<<endl;
        cout<<"address of pointer y"<<&y<<endl;
         cout<<" value of y (*y) "<<*y<<endl;
        
    }
    ~abc(){
            delete y;
     }
};

int main(){
    abc a(1,2);
    a.print();

    abc b=a; //call copy constructor
    b.print();
    *b.y=20;
    a.print();
    b.print();
    return 0;
    
    }