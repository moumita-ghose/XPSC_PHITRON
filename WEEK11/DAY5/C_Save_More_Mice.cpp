#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector< int >v(k);
        for(int i=0;i<k;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        
      
        vector<ll>pre(k);
        pre[0]=n-v[0];
        for(int i=1;i<k;i++){
            pre[i]=pre[i-1]+(n-v[i]);
        }

        
        ll ans=0;
        for(int i=0;i<k;i++){
            if(pre[i]<n){
                ans++;
            }
        }
        cout<<ans<<endl;
      
    }

    return 0;
}