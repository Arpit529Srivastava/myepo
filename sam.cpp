#include<iostream>
using namespace std;

int main(){


int n,m;
cout<<"enter no of rows and columns:";
cin>>n>>m;

int array[n][m];
cout<<"enter no of elements:";
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>array[i][j];
    }
}

int transpose[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        transpose[i][j]=array[j][i];
    }
}
 
cout<<"the transposed matrix is:";
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<transpose[i][j]<<" ";
    }cout<<endl;
}


}