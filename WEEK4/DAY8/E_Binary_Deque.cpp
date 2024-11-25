/*
link : https://codeforces.com/problemset/problem/1692/E
*/
#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s;
        cin>>n>>s;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll sum = 0;
        for(ll i=0;i<n;i++){
            sum+=v[i];
        }
        if(sum==s){
            cout<<0<<endl;
            continue;
        }
         if(sum<s){
            cout<<-1<<endl;
            continue;
        }
            ll left=0,maxlength=0;
            ll currsum =0;
            for(ll right=0;right<n;right++){
                currsum+=v[right];

                while(currsum>s){
                    currsum-=v[left];
                    left ++;
                }

                if(currsum==s){
                    maxlength=max(maxlength,right-left+1);
                }
            }
            cout<<n-maxlength<<endl;
          
        
    } 
    return 0;
}