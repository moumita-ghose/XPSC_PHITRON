#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    ll n = s.size();
    ll ans = 0;
    ll pos =0;
    if(n==1){
        if(s=="4"){
            cout<<1<<endl;
        }else if(s=="7"){
            cout<<2<<endl;
        }
    }else{

        for(ll i= (1LL<<n)-1;i>=0;i--){
        //    cout<<i<<" -> ";
            string x ;
            for(int j=n-1;j>=0;j--){
                if((i>>j)&1){
                    char c = '4';
                    x.push_back(c);
                }else{
                    char c = '7';
                    x.push_back(c);
                }
                // cout<<((i>>j)&1)<<" ";
            }
            // cout<<endl;
            pos++;
            // cout<<x<<endl;
            if(x==s){
                break;
            }
            // cout<<x<<endl;
        }
        // cout<<pos<<endl;
        
        for(int i=1;i<=n-1;i++){
            ans+=pow(2,i);
        }
        cout<<ans+pos<<endl;
        
    }
    return 0;
}