#include <iostream>
using namespace std;

void PrintBinary(int num){
for (int  i = 10; i >= 0; --i)
{
    cout<<((num>>i)&1);

}
cout<<endl;

}
int main(){
    PrintBinary(12);
    int a=12;
    int i=5;
    if((a &(1<<i)) != 0){
        cout<<"set bit"<<endl;

    }
    else{
        cout<<"unset bit"<<endl;
    }
    PrintBinary(a| (1<<4));
    PrintBinary(a &(~(1>>i)));
    int ct=0;
    for(int i=31; i>=0; --i){
    if((a &(1<<i)) != 0){
        
        ct++;}}
        cout<<ct<<endl;
    return 0;
}
