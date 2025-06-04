#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n;
  cout<<" size of vector:";
  cin>>n;
  vector <int> arr(n);
  arr.push_back(6);
  arr.push_back(9);
  arr.push_back(66);
  arr.push_back(77);
  cout<<"before pop:";
  cout<<"size of vector is:";
  cout<< arr.size()<<endl;
  cout<<"capacity of vector is:";
  cout<< arr.capacity()<<endl;
  for(int i=0;i<arr.size();i++){
  cout<<arr[i];
  cout<<endl;
 }
 cout<<"after pop the :";
 cout<<endl;
 arr.pop_back();

 for(int i=0;i<arr.size();i++){
  cout<<arr[i];
  cout<<endl;
  cout<<arr.empty();
 }
vector<int> arar;
cout<<"the vector arar isempty:";
cout<< arar.empty();

  
    return 0;
}