#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s[0]>=65 && s[0]<=90){
        cout<<s<<endl;
    }
    else{
        transform(s.begin(), s.begin()+1, s.begin(), :: toupper);
        cout<<s<<endl;
    }
}