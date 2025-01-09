/*
https://codeforces.com/problemset/problem/1840/D
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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
       
        auto check=[&](ll time)
        {
            int l=0,cnt=1;
            for(int r=0;r<n;r++){
                if( (v[r]-v[l])>(2*time)){
                    cnt++;
                    l=r;
                }
            }
            if(cnt<=3){
                return true;
            }else{
                return false;
            }
        };

        int l=0,r=1e9;
        ll mid,ans=0;
        while(l<=r){
            mid= (r+l)/2;
            if(check(mid)==true){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}