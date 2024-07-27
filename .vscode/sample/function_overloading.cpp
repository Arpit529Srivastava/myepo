#include <iostream>
using namespace std;
void func(int a, int b){
    cout<<"YE DEKHO"<<" "<<a+b<<" "<<endl;
}
void func(double a, double b){
    cout<<"DOST"<<" "<<a+b<<endl;
}
int main(){
    func(2,3);
    func(2.44, 4.55);
    return 0;
}