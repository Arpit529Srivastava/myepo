#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
//   int a;
//   cin>>a;
//   int n=3;
//   int b;
//   int ct=0;
//     while (n--)
//     {
//         cin>>b;
//         if(a==b){
//             ct++;}
//             a=b;
//              }
//     cout<<ct;
int arr[15];

int ct=0;
for(int i=0; i<4; i++){
    cin>>arr[i];
}
sort(arr,arr+4);
for(int i=0 ;i<4; i++){
    if(arr[i]!=arr[i+1]){
        ct++;
    }
}
cout<<ct;
    

}