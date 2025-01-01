#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;

        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end(), greater<int>() );

        vector<ll>pre(n);
        pre[0]=v[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+v[i];
        }

        // for(int i=0;i<n;i++){
        //     cout<<pre[i]<<" ";
        // }
        // cout<<endl<<endl;

        while(q--)
        {
            int key;
            cin>>key;
            int l=0,r=n-1;
            int ans=-1;
            while(l<=r){
                int mid = (r+l)/2;
                if(pre[mid]<key){
                    l=mid+1;
                    
                }else{
                    ans=mid;
                    r=mid-1;
                }
            }
            if(ans!=-1)
                cout<<ans+1<<endl;
            else
                cout<<ans<<endl;
        }
        
    }
    return 0;
}