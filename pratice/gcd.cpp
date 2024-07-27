#include <bits/stdc++.h>
#define nline "\n"
const int inf = 1e9;
#define ins insert
#define pb push_back
const int M = 1e9+7;
#define ll long long
#define lli long long int
#define vll vector <ll>
#define vi vector <int>
#define ld long double
using namespace std;

//to count the number of 1s in the number..//
//***cout<<__builtin_popcountll(n)<<'\n';*****//
// finding the index of an element in array
/* 
    auto it = find(arr.begin(), arr.end(), k);
    
    if(it != arr.end()){
        int index = distance(arr.begin(), it);
        cout << "YES " << index  << nline;  
    }
    else{
        cout << "NO" << nline;
    }
*/
//  BINARY SEARCH code
/*
  
  if(binary_search(arr.begin(), arr.end(), k)){
    cout<<"YES"<<nline;
  }
  else{
    cout<<"NO"<<nline;
  }
*/
             /////////////...TO PRINT PRIMES TILL N...///////////
vll sieve(int n) {
    int*arr = new int[n + 1]();
     vector<ll> vect; 
     for (int i = 2; i <= n; i++)
        if (arr[i] == 0) 
            {vect.push_back(i); 
        for (int j = 2 * i; j <= n; j += i)
            arr[j] = 1;} 
        return vect;
    }
    //complexity id(nlonglongn)
               ////////////...................../////////////////

void solve(){
  ll int a,b;
  cin>>a>>b;
  cout<<2*a<<" "<<2*b<<nline;
  
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    //solve();
    

    return 0;
}
