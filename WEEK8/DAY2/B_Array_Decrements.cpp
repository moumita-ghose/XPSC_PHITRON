#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        vector<ll>b(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        
        bool fl = false;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                fl = true;
                cout<<"NO\n";
                break;
            }
        }
        if(fl==true)
            continue;

        ll df =INT_MIN,ze=INT_MIN;
        bool f2=false;
        map<ll,int>mp;
        for(int i=0;i<n;i++){
            if(b[i]!=0){
                ll x = (a[i]-b[i]);
                mp[x]++;
            }else if(b[i]==0){
               
                ll x =a[i]-b[i];
                ze=max(ze,x);
            }
        }
        int ans=0;
        ll c = -1;
        for(auto it = mp.begin();it!=mp.end();it++){
            c=it->first;
        }

        if(mp.size()>1){
            ans=1;
        }
        if(c!=-1 && ze>c){
            ans=1;
        }
        if(ans==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
        
    return 0;
}