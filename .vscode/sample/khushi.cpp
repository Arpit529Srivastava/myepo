#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void write(int h,int m, int s){
    char str[10];
    fstream file;
    file.open("khushi.bin", ios:: out|| ios:: binary);
    sprintf(str,"%d:%d:%d", &h,&m,&s);
    file.write(str,sizeof(str));
    file.close();
}
void read(int h,int m, int s){
     char str[10];
    fstream file;
    file.open("khushi.txt", ios:: out|| ios:: binary);
    file.read(str,sizeof(str));
    file.close();
    cout<<str;
}
int main(){
    int h,m,s;
    cout<<"enter the hour:"<<endl;
    cin>>h;
    cout<<"enter the min:"<<endl;
    cin>>m;
    cout<<"enter the sec:"<<endl;
    cin>>s;
    write(h,m,s);
    read(h,m,s);
}