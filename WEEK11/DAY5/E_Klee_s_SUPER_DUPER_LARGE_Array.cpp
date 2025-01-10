/*
https://codeforces.com/problemset/problem/2009/E
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll getsum (ll a, ll n)
{
        int d =1;
        ll s = ( (2*a) + ((n-1) * d)); 
         /*
            n(2a + (n-1)d )
        ________________________________    where , n = how many numbers from a to the range 
                    2

          ------>  3+4+5+6+7+8+9+10  || a=3,n=7 ,7ta value ache 3 theke 10 porjonto 
        */

        ll mul = s*n;
        ll dv = mul /2;
        // cout<<dv<<endl;
        return dv;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int nn,k;
        cin>>nn>>k;

        ll a = k,n= ( ((nn+k-1) - k) + 1 ) ;
        // cout<<getsum(a ,n )<<endl;
        ll l=a,r=n+k-1,mid;
        ll ans= getsum(2,1e9);
        //       INT_MAX;
        // cout<<"st -> " << l<<" end -> "<<r<<endl;
        while(l<=r)
        {
            mid = (l+r)/2;
            ll leftrange = (mid-k)+1;
            ll rightragne =( ((nn+k)-1 ) - (mid+1) )+1;

            //  cout<<mid<<" -> "<<leftrange<<" -> "<<rightragne<<endl;
            
            ll leftsum = getsum(k,leftrange);
            ll rightsum=getsum(mid+1,rightragne);
           
            // cout<<leftsum<<" -> " <<rightsum<<endl;
           
            ans=min(ans, abs(leftsum-rightsum) );
            if(leftsum>=rightsum){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        cout<<ans<<endl;
        // cout<<endl<<endl;

    }
    return 0;
}