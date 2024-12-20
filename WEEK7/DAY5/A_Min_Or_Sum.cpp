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

        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll ans=v[0];
        for(int i=1;i<n;i++){
            ans=ans|v[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}