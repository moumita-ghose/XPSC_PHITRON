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
    string s;
    cin>>s;
    string r = s;
    reverse(r.begin(),r.end());

    map<char,vector<int>>mp_s;
    map<char,vector<int>>mp_r;

    for(int i=0;i<n;i++){
        mp_s[s[i]].push_back(i);
        mp_r[r[i]].push_back(i);
    }
    // cout<<r;pr
    // for(auto it= mp_r.begin();it!=mp_r.end();it++){
    //     cout<<it->first<<" - > ";
    //     vector<int>v=it->second;
    //     for(int i=0;i<v.size();i++){
    //         cout<<v[i]<<" ";
    //     }
    //     cout<<"\n";
    // }

    vector<int>prmu(n);
    for(char ch= 'a';ch<='z';ch++){
        vector<int>cus= mp_s[ch];
        vector<int>cur=mp_r[ch];
        for(int i=0;i<cus.size();i++){
            prmu[cur[i]]=cus[i];
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<prmu[i]<<" ";
    // }
    ll ans = 0;
    pbds_set<int>st;
    for(int i=n-1;i>=0;i--){
        ans = ans+ st.order_of_key(prmu[i]);
        st.insert(prmu[i]); 
    }
    cout<<ans;pr

return 0;
}
