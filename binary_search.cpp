#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key){
    int s=0; 
    int e= size-1;
    int mid= s+((e-s)/2);

    while(s<= e){
        if(arr[mid]==key){
            return mid;
        }
        if (arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+((e-s)/2);

    }
   return -1; 
}
int main(){
    int a[5]={2,3,4,56,6};
    int b[6]={3,45 ,677,44,2,6};
    int index=BinarySearch(a,5,4);
    cout<<"index of the 4 is->"<<index<<endl;
}