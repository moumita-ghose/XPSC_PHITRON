// https://www.codechef.com/problems/MINMXOR
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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<ll>ans(n+1);
        ll x =0;
        for(int i=0;i<n;i++){
            x=x^v[i];
        }
        // cout<<x<<endl;
        ans[0]=x;
        for(int i=0;i<n;i++){
            ll y = ans[0]^v[i];
            ans [i+1]=y;
        }
        sort(ans.begin(),ans.end());
        cout<<ans[0] <<endl;
    }
    return 0;
}