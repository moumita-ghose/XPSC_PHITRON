/*
https://codeforces.com/problemset/problem/1324/D
*/
#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
#define ll long long int 
#define pr cout<<"\n";
template<typename T> using pbds_multiset = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
template<typename T> using pbds_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<ll>dif(n);
    for(int i=0;i<n;i++){
        dif[i]=a[i]-b[i];
    }
    ll ans=0;
    pbds_multiset<ll>st;
    for(int i=0;i<n;i++){
        ll x = st.order_of_key(dif[i]);
        st.insert(-dif[i]);
        ans+=x;
    }
    cout<<ans<<"\n";

return 0;
}