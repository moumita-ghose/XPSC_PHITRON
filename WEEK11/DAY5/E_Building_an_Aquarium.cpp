/*
https://codeforces.com/problemset/problem/1873/E
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define cinv for(int i=0;i<n;i++) cin>>v[i];


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int>v(n);

        cinv;
        sort(v.begin(),v.end());

        auto sum = [&](ll height)
        {
            ll s=0;
            for(int i=0;i<n;i++){
                if(v[i]<height){
                    s=s+(height-v[i]);
                }
            }
            return s;
        };

        ll l=1,r=2e9+1;
        ll ans,mid;
        while(l<=r){
            mid=(l+r)/2;
            if(sum(mid)<=x){
                ans=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}