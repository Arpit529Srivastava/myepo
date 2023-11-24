#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid= (start+end)/2;

    while(start<=end){
        if(arr[mid] == key){
           return mid;
        }
        else{
            if (key >arr[mid]){
                start=mid+1;
            }
            else{
                start=end-1;
            }
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main(){
    
    int arr[5]={2,3,4,18,19 };
    
int print= binarySearch(arr,5,2) ;
cout<<"index of elemnt is: "<<print<<endl; 
}