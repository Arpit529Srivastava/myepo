#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int a=0,b=0;
    for(int i=0;i!='\0';i++)
    {
        
        if(s[i]!='1')
        {
            a++;
            b=0;
        }
        else if (s[i]!='0')
        {
            b++;
            a=0;
        }
    }
    cout<<a<<" "<<b;
    if(a>=7 || b>=7)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }

}