#include <iostream>
using namespace std;

void Name(int i,int n){
    
    if(i<1){
        return;
    }
    else{
        
        Name(i-1,n);
        cout<<i<<endl;
    }
   

}
int main(){
   int n;
   cin>>n;
   Name(n,n);
   
}