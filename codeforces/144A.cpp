#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    
    int max_value=0; 
    int min_value=110;
    int maxi=0;
    int mini=0;

    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        int a;
        cin>>a;

        
        if(a>max_value){
           maxi=i;
           max_value=a;
        }
        if(a<=min_value){
           mini=i;
           min_value=a;
        }
    }
    if(maxi>mini){
        cout<<(maxi-1)+(n-mini)-1;
    }
    else{
        cout<<(maxi-1)+(n-mini);
    }
}