#include <iostream>
using namespace std;
 int cnt=1;
int print(){
   
    if(cnt==4){
        return cnt;}
    
    cnt++;
    return print();
}
int main(){
   int a= print();
   cout<<a<<endl;
}

