/*
https://codeforces.com/problemset/problem/2013/B
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
   ll t;
    cin>>t;
    while(t--)
    {
       ll n;
        cin>>n;
        deque<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        for(int i=0;i<n-2;i++){
            v[n-2]=v[n-2]-v[i];
        }

           ll ans = v[n-1] - v[n-2];
            cout<<ans<<endl;
        
      
    }
    return 0;
}