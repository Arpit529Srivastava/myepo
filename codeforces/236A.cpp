#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string st;
    cin>>st;
    int n= st.size();
    sort(st.begin(), st.end());
    int ct=0; 
    for(int i=0; i<n; i++){
        if(st[i]==st[i+1]){
            ct++;
        }
    }
    
    
    if((n-ct)%2!=0){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
}