#include<iostream>
using namespace std;

void printpermutation(string& str,int i){
    //base case
    if(i >= str.length()){
        cout<<str<<" ";
        return ;
    }
    
    for(int j=i;j<str.length();j++){
      //swap 
        swap(str[i],str[j]);
      //recursive call
        printpermutation(str,i+1);
      //back tracking -> to recreate orignal string (org.me vapas convert karn ne k leye)
        swap(str[i],str[j]);  
    }
    
}

int main(){
    string str="abc";
    int i=0;
    int s=str.length();
    //cout<<s<<endl;
    cout<<"our permutation of string str are: "<<endl;
    printpermutation(str,i);
    return 0;
}
