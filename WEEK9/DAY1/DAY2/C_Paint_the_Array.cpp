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
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        ll g1=0,g2=0;
        for(int i=0;i<n;i=i+2){
            g1=__gcd(g1,v[i]);
        }
        for(int i=1;i<n;i=i+2){
            g2= __gcd(g2,v[i]);
        }
        ll ans=0;
        //g1
        bool fg = false;
        for(int i=1;i<n;i=i+2){
            if(v[i]%g1==0){
                fg=true;
            }
        }
        if(fg==false){
            ans=g1;
        }else{
            bool fg2=false;
            for(int i=0;i<n;i=i+2){
                if(v[i]%g2==0){
                    fg2=true;
                }
            }
            if(fg2==false){
                ans=g2;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}