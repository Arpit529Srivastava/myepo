#include <iostream>
using namespace std;
int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int ct=0;
    if(k==1 ||l==1 ||m==1 ||n==1 ){
            ct=d;
        }
        else{
    for(int i=k; i<=d; i++){
        if((i/k!=0 && i/l!=0 && i/l!=0 && i/m!=0)){
            ct++;
        }
        
    }
    }
    cout<<ct<<endl;
}