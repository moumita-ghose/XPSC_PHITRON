#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll>pre(n);
    pre[0]=v[0];

    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+v[i];
    }
    // for(int i=0;i<n;i++){
    //     cout<<pre[i] <<" ";
    // }
    // cout<<endl<<endl;


    int q;
    cin>>q;
    while(q--)
    {
        int key;
        cin>>key;
        int l=0,r=n-1,mid;
        int ans =0;
        while(l<=r){
            mid=(l+r)/2;
            if(pre[mid]>=key){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        cout<<ans+1<<endl;
    }

    return 0;
}