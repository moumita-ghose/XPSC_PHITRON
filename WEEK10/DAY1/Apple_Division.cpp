/*
https://cses.fi/problemset/task/1623/

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    vector<ll>v(n);
    ll sum =0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum=sum+v[i];
    }
    ll ans = INT_MAX;
    for(int i=0;i<((1<<n));i++){
        ll x =0;
        for(int j=n-1;j>=0;j--){
            // cout<<((i>>j)&1)<<" ";
            if((i>>j)&1){
                x=x+v[j];
                // cout<<v[j]<<" ";
            }
        }
        // cout<<endl;
        ll df = abs(sum-x-x);
        ans=min(ans,df);
    }
    cout<<ans<<endl;
    return 0;
}