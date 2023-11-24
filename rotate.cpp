#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

vector<int> v;

v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);

int k;
cin>>k;


reverse(v.begin(),v.end()-1);
//reverse(v.begin(),v.begin()+k);
//reverse(v.begin()+k,v.end());

for(int a:v){
    cout<<a<<" ";
}

}