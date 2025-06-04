#include<iostream>
using namespace std;
char grade(int marks){
if(marks==100||marks>90){
        return"O" ;
    }
    elseif(marks>80){
        return "A+";
    }
    elseif(marks>70){
        return A;
    }
    elseif(marks>60){
        return B+;
    }
    elseif(marks>50){
        return B;
    }
    elseif(marks>40){
        return P;
    }
    elseif(marks>100){
        return IN VALID MARKS ENTERED;
    }
else
    return F;
    
}
int main(){
    int marks;
    cout<<" enter the marks of studentn:";
    cin>>marks;
    cout<<grade(marks);
    return 0;
}
