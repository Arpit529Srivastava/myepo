#include <iostream>
using namespace std;
//getting the maximun value
int Max(int numb[], int size){
    int max=INT_MIN;
    for (int i=0; i<=size; i++)
    {    
        if (numb[i]>max)
        {
            max=numb[i];
        }
    }
    return max;

}
//getting the min value
int Min(int numb[], int size){
    int min=INT_MAX;
    for (int i=0; i<size; i++)
    {    
        if (numb[i]<min)
        {
            min=numb[i];
        }
    }
    return min;
}
int main(){
    int size;
    cout<<"enter the value if size: ";
    cin>>size;
    int numb[100];
    cout<<"input is taken"<<endl;
    for(int i=0; i<size; i++){
        cin>>numb[i];
        
         
}
cout<<"maximun value of the array is:"<<Max(numb, size)<<endl;
cout<<"minimun value of the array is:"<<Min(numb, size)<<endl;
    }
   