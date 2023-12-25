#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp;
    int a;
    for(int i=1; i<n; ++i){
        temp=i;
         a=i+1;
        i=i+1;
        a= temp;
        cout<<i<<" "<<i+1;
    }
}