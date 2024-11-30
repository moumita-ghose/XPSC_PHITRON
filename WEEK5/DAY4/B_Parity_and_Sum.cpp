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
        vector<ll>even,odd;

        for(ll i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0){
                even.push_back(v[i]);
            }else{
                odd.push_back(v[i]);
            }
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());

        // for(ll i=0;i<odd.size();i++){
        //     cout<<odd[i]<<" ";
        // }
        // cout<<endl;
        // for(ll i=0;i<even.size();i++){
        //     cout<<even[i]<<" ";
        // }
        // cout<<endl<<endl;
        if(odd.size()==0 || even.size()==0){
            cout<<0<<endl;
        }else{
            ll n2 = odd.size();
            ll n1 = even.size();
            ll mx = odd.back();
            ll ans=0;
            bool flag = false;
            for(ll i=0;i<n1;i++){
                if(even[i]>mx){
                    ans=n1+1;
                    flag = true;
                    break;
                }
                    ans++;
                    mx=mx+even[i];
                
            }
            // if(flag ==true){
            //     cout<<n1+1<<endl;
            // }else{
            //     cout<<ans<<endl;
            // }
            cout<<ans<<endl;
        }
    }
    
    return 0;
}