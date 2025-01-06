/*
https://cses.fi/problemset/task/1620/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,t;
    cin>>n>>t;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    auto num_of_product = [&](ll sec)
    {   
        ll sum=0;
        for(int i=0;i<n;i++){
            sum=sum+(sec/v[i]);
            if(sum>=t){
                return true;
            }
        }
            return false;
        
    };
    
    ll l=1,r=1e18,mid,ans;
    while(l<=r){
        mid=(l+r)/2;
        if(num_of_product(mid)){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}