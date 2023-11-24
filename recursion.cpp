#include <iostream>
using namespace std;

void Name(int i,int n){
    
    if(i>n){
        return;
    }
    else{
        cout<<i<<endl;
        Name(i+1,n);
    }
   

}
int main(){
   int n;
   cin>>n;
   Name(1,n);
   
}