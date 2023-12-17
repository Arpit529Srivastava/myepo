#include <iostream>
#include <algorithm>
using namespace std;
void Selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int mini=i;
    
      for(int j=i+1; j<n; j++){
        if(arr[j]<arr[mini]){
        mini=j;}
      }
    // int temp=arr[mini];
    // arr[mini]=arr[i];
    // arr[i]=temp;
    swap(arr[mini],arr[i]);

}
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; ++i){
        cin>>arr[i];
    }
    Selection_sort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}