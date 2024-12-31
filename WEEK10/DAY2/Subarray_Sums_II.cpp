/*
https://cses.fi/problemset/task/1661/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n);
    vector<ll>pref(n+1);
    pref[0]=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        pref[i+1]=pref[i]+v[i];
    }
    // for(int i=0;i<n+1;i++) cout<<pref[i]<<" ";
    map<ll,int>mp; //sum ,cnt;
    ll cnt=0;
    for(int i=0;i<n+1;i++){
        ll df = pref[i]-x;
        if(mp[df]>=1){
            cnt=cnt+mp[df];
        }

        mp[pref[i]]++;
    }
    cout<<cnt<<endl;
    return 0;
}

