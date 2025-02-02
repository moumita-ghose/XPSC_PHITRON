/*
https://codeforces.com/problemset/problem/1430/E
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
    pbds_set<pair<int, int> >st;
    for(int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        st.insert({a,+1});
        st.insert({b,-1});
    }
    ll prefix=0;
    ll ans = 0;
    for(auto it = st.begin();it!=st.end();it++){
        // cout<<it->first<<" , "<<it->second;
        prefix+=it->second;
        ans=max(ans,prefix);
        // pr
    }
    cout<<ans;pr

return 0;
}