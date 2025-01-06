#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll median=v[n/2];
    // cout<<median<<endl;
    ll md=n/2;
    while(k!=0){
        if( ( md < n-1 ) && ( v[md] < v[md+1] ) ){
            v[md]++;
            k--;
            continue;
        }
        v[md]=v[md]+1;
        if(md==n-1){
            md=n/2;
        }else{
            md++;
        }
        
        k--;
    }
    sort(v.begin(),v.end());
    // for(int i=0;i<n;i++) cout<<v[i]<<" ";
    cout<<v[n/2]<<endl;
    return 0;
}