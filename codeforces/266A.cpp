#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    bool isPrime= true;
    for(int i=1; i<=y; ++i){
        if((x+i)%2==0){
            isPrime=false;
        }

    }
}