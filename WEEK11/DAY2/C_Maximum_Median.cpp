/*
https://codeforces.com/problemset/problem/1201/C
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    auto how_many_product=[&](int median)
    {
        ll totalop=0;
        for(int i=n/2;i<n;i++){
            if(v[i]<median)
                totalop+=median-v[i];
            else
                totalop+=0;
        }
        if(totalop<=k){
            return true;
        }else{
            return false;
        }
    };
        sort(v.begin(),v.end());

    
    int l=1,r=2e9;
    ll mid, ans;
    while(l<=r){
        mid=l + (r-l)/2;
        if(how_many_product(mid)){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
   
     cout<<ans<<endl;
    return 0;
}