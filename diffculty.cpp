#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int S,A,B,C;
	for(int i=0; i<t; i++){
	    cin>>S>>A>>B>>C;
	    float x=(C/100)*S;
	    float b= S+x;
	    if(b>=A && b<=B){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
