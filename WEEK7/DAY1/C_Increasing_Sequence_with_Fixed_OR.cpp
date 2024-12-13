#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        ll n;
        cin>>n;
        vector<ll>ans;
        ans.push_back(n);
        for(int k=0;k<=__lg(n);k++){
            if((n>>k)&1){
                ll val = n-(1LL<<k);
                if(val>0)
                    ans.push_back(val);
            }
        }
        cout<<ans.size()<<endl;
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}