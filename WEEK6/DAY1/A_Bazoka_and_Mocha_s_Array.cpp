/*
https://codeforces.com/contest/1975/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        
        ll ind=0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }

        if(is_sorted(v.begin(),v.end())){
            cout<<"Yes\n";
            continue;
        }
        
        ll mx = v[0];
        vector<ll>incre;
        incre.push_back(v[0]);
        
        for(ll i=1;i<n;i++){
            
            if(v[i]>=mx){
                mx = v[i];
                incre.push_back(v[i]);
            }else{
                ind = i;
                break;
            }
        }

        vector<ll>ans;
        for(int i=ind;i<n;i++){
            ans.push_back(v[i]);
        }

        for(int i=0;i<incre.size();i++){
            ans.push_back(incre[i]);
        }

        if(is_sorted(ans.begin(),ans.end()) ){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
        

       
    }
    return 0;
}