#include<iostream>
using namespace std;

class box {
    int width;
    public:
    void set_width(int _val){
        width = _val;
    }
    int get_width() {
        return width;
    }
};

int main(){
  box v;  
  return 0;
}