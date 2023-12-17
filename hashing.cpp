#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string st;
    cin>>st;
   

    
    //pre-compute
    map<char, int > mpp;
    for(int i=0; i<st.size(); ++i ){
        mpp[st[i]]++;
    }
    //iterator

    for(auto it: mpp){
        cout<<it.first<<"-->"<<it.second<<endl;
    }
    int t;
    cin>>t;
    while(t--){
        char num;
        cin>>num;
        //fetch
        cout<<mpp[num]<<endl;
    }

}