#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
//compare two value using function
int mini(int min,int diff){
    if(min<diff){
        min=diff;
        return min;
    }
}
// STEP 1 convert string into array
int min_diff(vector <string> timepoint){
    vector <int> final;
    for(int i=0;i<timepoint.size();i++){
        string curr=timepoint[i];
        int hour=stoi(curr.substr(0,2));
        int minutes=stoi(curr.substr(3,2));
        int total=(hour*60)+minutes;
        vector <int> final;
        final.push_back(total);
    }
    // sort our array
    // sort(final.begin(),final.end());

    sort(final.begin(),final.end());
    int min;
    int m =final.size();
        for(int j=0;j<m;j++){
            int diff=final[j+1]-final[j];
            min=mini(min,diff);
        } 
        // difference calculate 
    int n =final.size();
    int lastdiff=(final[0]+1440)-final[n-1];
    int lastdiff2=final[n-1]-final[0];
    int chota;
        // main logic of the question and most important
        if(lastdiff<lastdiff2){
            chota=lastdiff;
        }
        else{
            chota=lastdiff2;
        }
        min=mini(min,chota);
    return min;

    }


int main(){
    vector <string> timepoint{"12:10","14:43","15:40","16:46","16:59","17:50","18:35"};
    int minimum = min_diff(timepoint);
    cout<<"minimum time difference is :"<<minimum;
    return 0;

}