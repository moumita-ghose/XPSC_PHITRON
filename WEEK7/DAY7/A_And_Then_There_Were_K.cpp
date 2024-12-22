/*
https://codeforces.com/problemset/problem/1527/A
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll mx = __lg(n);
        ll ans=0 ;
       
        for(int i = mx-1;i>=0;i--){
            // cout<<(1<<i)<<endl;
            ll x = (1<<i);
            ans=ans+x;
        }
        // cout<<"_________________\n";
        cout<<ans<<endl;

    }

    return 0;
}