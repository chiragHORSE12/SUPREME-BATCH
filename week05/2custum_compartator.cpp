#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
bool cstm(string a,string b){
    return a > b;
}
int main(){
    vector <string>r{"rawal","chirag","arun","rajpurohit","setu","gurumaharaj","lakhan","vidhya","drasti"};
    sort(r.begin(),r.end(),cstm);
    for(auto i:r){
        cout<<i<<endl;; 
    }
    return 0;

}