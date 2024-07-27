#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    //reading and writing
    // string data;
    // fstream file;
    // file.open("arpit.txt", ios:: out);
    // cout<<"enter your name: ";
    // getline(cin,data);
    // file<<"data"<<endl;
    // file.close();
    // file.open("arpit.txt", ios::out);
    // while(getline(file,data)){
    //     cout<<data<<endl;
    // }
    // file.close();
    fstream arpit;
    arpit.open("y.txt", ios:: out);
    if(arpit.is_open()==0){
        cout<<"ERROR"<<endl;
    }
    else{
       arpit<<"DAYANANDA SAGAR COLLEGE OF ENGINEERING"<<endl;
       arpit.close();
    }
    arpit.close();
    return 0;
    
}