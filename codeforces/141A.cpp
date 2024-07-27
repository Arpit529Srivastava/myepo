#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s1;
    string s2;
    string s3;
    cin>>s1>>s2>>s3;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    sort(s3.begin(), s3.end());
    string st4= s1+s2;
    // cout<<s1<<" "<<s2<<" "<<s3<<endl;;
    sort(st4.begin(), st4.end());
    // cout<<st4;
    if(st4==s3){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}