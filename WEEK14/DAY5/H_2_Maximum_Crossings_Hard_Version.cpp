/*
https://codeforces.com/problemset/problem/1676/H2
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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll ans=0;
        pbds_multiset<int>ml;
        for(int i=0;i<n;i++){
            ml.insert(v[i]);
            int x = ml.order_of_key(v[i]);
            int y = ml.size();
            // cout<<v[i]<<"-> " <<ml.size()<<" ->  "<<ml.order_of_key(v[i])<<" ";pr
            ans=ans+abs(y-x)-1;
        }
     
        cout<<ans;
        pr 
    }   

return 0;
}