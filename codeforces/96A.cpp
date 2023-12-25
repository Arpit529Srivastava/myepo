#include <iostream>
using namespace std;
int main(){
    string st;
    cin>>st;
    string st1;
    string st2;
    for(int i=0; i<st.size(); i++){
        if(st[i]=='0'){
            st[i]=st1[i];
        }
        else{
            st[i]=st2[i];
        }
    }
}