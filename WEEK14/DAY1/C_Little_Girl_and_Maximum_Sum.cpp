#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define pr cout<<"\n";
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<int>v(n+1);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll>df(n+2,0);
    for(int i=1;i<=q;i++){
        int l,r;
        cin>>l>>r;
        df[l]=df[l]+1;
        df[r+1]=df[r+1]-1;
    }
    vector<ll>prefix(n+2,0);
    for(int i=1;i<n+2;i++){
        prefix[i]=df[i]+prefix[i-1];
       
    }

     sort(prefix.begin(),prefix.end() ,greater<ll>() );
     sort(v.begin(),v.end(),greater<int>());
    ll sum=0;
    for(int i=0;i<n;i++){
        // cout<<prefix[i]<<" ";
        ll cur = prefix[i]*v[i];
        sum+=cur;
        // cout<<prefix[i]<<" -> "<<v[i]<<" ";
        // cout<<v[i-1]<<" ";
        // pr
    }
    cout<<sum;pr
    return 0;
}
