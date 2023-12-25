 #include <iostream>
 using namespace std;
int main(){
    string st;
    string st1;
    string st2;
    cin>>st>>st1;
    st2.resize(st.size());
     for(int i=0; i<st.size(); ++i){
        if(st[i]==st1[i]){
             st2[i]='0';
         }
         else{
             st2[i]='1';
         }
     }
     cout<<st2<<endl;
 }

