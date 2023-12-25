#include <iostream>
using namespace std;
int main(){
    int n;
    int points;
    cin>>n>>points;
    int max=points;
    int min= points;
    int ct=0;
    while (--n)
    {
        cin>>points;
        if(max<points){
            max= points;
            ++ct;
            
        }
        if(min>points){
            min= points;
            ++ct;
            
        }
    }
    cout<<ct<<endl;
    return 0;
    
}