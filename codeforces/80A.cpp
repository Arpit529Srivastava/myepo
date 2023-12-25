#include <iostream>
using namespace std;
bool isPrime(int n){
	for(int i=2; i*i<=n; i++){
		if(n%i==0){
		return false;
	}
	}
	return true;
}

int main(){
int x,y;
cin>>x>>y;
int temp;
for(int i=x+1; i; ++i){
	if(isPrime(i)){
		temp=i;
		break;
	}
}
	if(y==temp){
		cout<<"YES"<<endl;
		
	}
	else{
		cout<<"NO"<<endl;
	}



}