/*
no : 13
link : https://codeforces.com/problemset/problem/1420/B
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    // cout<<__lg(10000000000);
    int t;
    cin>>t;
    while(t--)
    {
        // cout<<"t -> "<<t<<" \n";
        int n;
        cin>>n;

        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<ll>st(41);
        for(int i=0;i<=40;i++){
            st[i]=0;
        }

        for(int i=0;i<n;i++){
            int mb= __lg(v[i]);
            st[mb]++;
        }
        ll ans =0;
        for(int i=0;i<=40;i++){
            // cout<<i<<" -> "<<st[i] <<endl;
            if(st[i]>1){
                ll x = st[i];
                ll cnt =( (x*(x-1))/2 );
                ans=ans+cnt; 
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}