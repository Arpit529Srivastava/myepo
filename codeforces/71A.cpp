#include <iostream>
using namespace std;
int main(){
    int m; cin>>m;
    while(m--){
    string st;
    cin>>st;
    
    int n= st.size();
    if(n<=10){
        cout<<st<<endl;;

    }
    else{
    int ct=0;
    for(int i=1; i<n-1; i++){
        ct++;
    }
    cout<<st[0]<<ct<<st[n-1]<<endl;;
}


}
}