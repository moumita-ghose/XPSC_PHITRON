/*

https://codeforces.com/contest/61/problem/E
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
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    pbds_set<ll>st1;
    vector<ll>cnt_st1(n,0);
    vector<ll>cnt_st2(n,0);
    pbds_set<ll>st2;
    for(int i=n-1;i>=0;i--){
        ll x = st1.order_of_key(v[i]);
        cnt_st1[i]=x;
        st1.insert(v[i]);
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        
        ll x = st2.size()-st2.order_of_key(v[i]+1);
        ll res =(ll) (x * cnt_st1[i]);
        st2.insert(v[i]);
        ans+=res;
    }
    cout<<ans;
    pr

return 0;
}
