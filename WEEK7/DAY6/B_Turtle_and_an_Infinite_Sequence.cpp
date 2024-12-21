#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll>v(n+1);
        for(int i=0;i<=n;i++){
            v[i]=i;
        }
        for(int j=1;j<=m;j++){
            v[0]=v[0]|v[1];
            for(int i=1;i<n;i++){
                v[i]=v[i-1]|v[i]|v[i+1];
            }
            v[n]=v[n-1]|v[n];
        }
        cout<<v[n]<<endl;
    }

    return 0;
}