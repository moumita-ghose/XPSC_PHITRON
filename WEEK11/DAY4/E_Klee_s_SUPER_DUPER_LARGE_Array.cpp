/*
https://codeforces.com/problemset/problem/2009/E
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll getsum(int a,int n)
{
    int d=1;
    return ((n/2)*(( (2*a) +(n-1)) *d ));
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        ll l=1,r=n;
        // cout<<cursum<<endl;
        
       

        ll mid ;
        ll ans = 1e18;

        while(l<=r){
            mid=(l+r)/2;
            ll adds = getsum(k,mid);
            ll subs = getsum(mid+1,k+n-1);
            ans=min(ans, abs(adds-subs) );

            if(subs>=adds){
              l=mid+1;
            } else{
                r=mid-1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}