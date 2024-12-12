/*
link : https://codeforces.com/contest/1985/problem/C
*/
 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x;
        // vector<ll>v(n);
        ll sum=0,mx =-1,cnt=0;
        for(ll i=0;i<n;i++){
            cin>>x;
            sum=sum+x;
            mx=max(mx,x);
            if(mx==(sum-mx)){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
 
    return 0;
}