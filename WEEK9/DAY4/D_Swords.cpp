#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
     vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int mx = *max_element(v.begin(),v.end());

    vector<int>df(n);
    ll sum=0;
    int z = 0;
    for(int i=0;i<n;i++){
        df[i]=mx-v[i];
        z= __gcd(z,df[i]);
        sum=sum+df[i];
    }
    ll y =ceil(1LL* (sum/ (z*1.0)) ) ;
    cout<<y<<" "<<z<<endl;
    return 0;
}