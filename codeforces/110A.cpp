#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t; 
    cin>>t;
    int n;
    cin>>n;
    int l,r;
    int arr[n];
    int arr2[n];

    while(t--){
        
        for(int i=0; i<n;++i){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            cin>>arr2[i];

        }
        for(int i=0; i<n; ++i){
        while((arr[i]!=arr2[i] ) && arr[n-1-i]!=arr2[n-1-i]){
            cout<<i+1<<n-1-i;
        }

        }
    }
}