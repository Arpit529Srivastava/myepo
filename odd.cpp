#include<iostream>
#include<vector>

using namespace std;

int main(){

int array[]={1,2,3,4,5,6};

int evensum=0;
int oddsum=0;

for(int i=0;i<6;i++){
    if(i%2==0){
      evensum+=array[i];  
    }
    else{
        oddsum+=array[i];
    }
}
  
cout<<(evensum-oddsum)<<endl;

return 0;


}