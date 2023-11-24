#include<iostream>
using namespace std; 
int main() 
{ 
    int arr[]={1,2,3,4,5};   //array initialization
    cout<<"The elements are: ";
    for(auto i : arr)
    {
    	cout<<i<<" ";
    }
    return 0;
}