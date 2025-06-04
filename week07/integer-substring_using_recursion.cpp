#include<iostream>
#include<vector>
#include<string>
using namespace std;

void sub(string str,string output,int i, vector <string>& v ){
    //base acse
    if(i>=str.length()){
        //print output
        //cout<<output<<" ";
        //store
        v.push_back(output);

        return; 

    }
    //exclude
    sub(str,output,i+1,v);

    //include
    output.push_back(str[i]);
    
    sub(str,output,i+1,v);


}

int main(){
    string str;
    cout<<"enter your string:";
    getline(cin,str);
    string output="";
    vector <string> v;
    int i=0;
    sub(str,output,i,v);
    for(auto val:v){
        cout<<val <<" "<<endl;
    }
    cout<<"size of vector v is:"<<v.size()<<endl;
    return 0;
}