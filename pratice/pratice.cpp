//selection sort
#include <iostream>
using namespace std;
void selection_sort(int arr[], int n){
    int mini;
    for(int i=0; i<n-1; i++){
        mini=i;

        for(int j=i; j<n; j++){
            {
                if(arr[j]<arr[mini])
                mini=j;
               
            }
        }
        swap(arr[mini], arr[i]);
    }
}
void bubble_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void insertion_sort(int arr[], int n){
for(int i=0; i<n; i++){
    int j=i;
    
    while (j>0 && arr[j-1]>arr[j])
    {
        swap(arr[j-1],arr[j]);
        j--;
    }
    
}
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    int mini=0;
    for(int i=0 ;i<n; i++){
        cin>>arr[i];
    }
   //selection_sort(arr, n);
  // bubble_sort(arr,n);
  insertion_sort(arr,n);
    for(int i=0 ;i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}