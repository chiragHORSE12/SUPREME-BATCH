#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    //creation 
    unordered_map< string,int > m;

    //insertion
    pair<string,int> p=make_pair("scorpio",9);
    m.insert(p);

    pair<string,int> p2("aulto",3);
    m.insert(p2);

    m["fortuner"]=10;

    //access
    cout<<m.at("aulto")<<endl;
    cout<<m.at("fortuner")<<endl;
    cout<<m["scorpio"]<<endl;

    //search
        //present ha to vo 1 dege nhi to 0
    cout<<m.count("fortuner")<<endl;
    cout<<m.count("for")<<endl;

    if(m.find("fortuner") !=m.end()){
        cout<<"fortuner is present "<<endl;
    }
    else{
        cout<<"fortuner not found "<<endl;
    }

    //size
    cout<<m.size()<<endl;
    cout<<m["etios"]<<endl;
    //known key hote to ketane bar h vo bata ta
    //nhi hote to entry kar deta kyu k es se hum naye entry dal te ha 
    cout<<m.size()<<endl;

    //printing all entries 
    for(auto i:m){

        cout<<i.first<<" "<<i.second<<endl;
    }
return 0;
}