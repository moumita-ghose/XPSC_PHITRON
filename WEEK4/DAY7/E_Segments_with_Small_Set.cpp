/*
https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E
*/
#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    int n;
    cin>>n;
    ll k;
    cin>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    ll l=0,r=0,ans=0;
    map<ll,ll>mp;
    while(r<n)
    {
        mp[v[r]]++;

        while(mp.size()>k){
             
            mp[v[l]]--;
            if(mp[v[l]]==0){
                mp.erase(v[l]);
            }
            l++;     
        }
         ans=ans+(r-l+1);
        r++;
    }
    cout<<ans<<endl;
    return 0;
}
