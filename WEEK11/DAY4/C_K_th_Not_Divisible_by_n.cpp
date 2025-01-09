/*

https://codeforces.com/problemset/problem/1352/C

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        ll l=1,r=2e9,mid,ans;
        while(l<=r){
            mid=(l+r)/2;
            if( ( mid-(mid/n) )>=k){
                ans = mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}