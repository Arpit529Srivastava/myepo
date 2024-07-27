#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ct=0;
    for(int i=0;i<n; i++){
        if(arr[i]<0){
            ct++;
        }

    }
    if(ct==n){
        cout<<-1<<endl;
    }
    
        // this done with the time complexity of O(n^3)
    int worst=0; 
    for(int a=0; a<n; a++){
        for(int b=0 ;b<n; b++){
            int sum=0; 
            for(int k=a; k<=b; k++){
                sum+=arr[k];
            }
            worst= max(worst,sum);
        }
    }
    
    cout<<worst<<endl;
    //better solution
    int better=0 ;
    for(int a=0; a<n; a++){
        int som=0;
        for(int b=a; b<n; b++){
            som+=arr[b];
            better= max(better, som);
        }
        
    }
     cout<<better<<"\n";
    
    //best-->also known as Kadane's algorithm
    int best(0), sem(0);
    for(int k=0; k<n; k++){
        sem=max(arr[k], sem+arr[k]);
        best= max(best, sem);
    }
    cout<<best<<"\n";


}