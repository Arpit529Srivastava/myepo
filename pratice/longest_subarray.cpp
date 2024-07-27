#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void longest_subarray(int arr[],int n, int k){
    //brute force
     int length=0;
for(int i=0; i<n; i++){
    int sum=0;
    for(int j=i; j<n; ++j){
        sum+=arr[j];
        if(k==sum){
            length=max(length, j-i+1);
        }
    }
   
}
cout<<length<<"\n";
}
map <int, int> arr;
int main(){
    int n; int arr[n];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    longest_subarray(arr,n, 3);
    
}