#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
     int n;
    cin>>n;
    ll s;
    cin>>s;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    ll l=0,r=0,sum=0,ans=0;
    while(r<n){
        sum=sum+v[r];
        // cout<<v[r]<<" ";
        while(sum>=s){
            ans=ans+(n-r);
            sum=sum-v[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;

    return 0;
}