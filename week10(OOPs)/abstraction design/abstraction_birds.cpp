#include<iostream>
#include"BIRD_H"

using namespace std;
void birddoessomething(){
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
}
int main(){
    Bird* bird= new sparrow();
    birddoessomething(bird);
    return 0;
    }
