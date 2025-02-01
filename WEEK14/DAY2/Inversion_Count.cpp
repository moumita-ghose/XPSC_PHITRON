/*
https://www.spoj.com/problems/INVCNT/en/
*/
#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
template<typename T> using pbds_multiset = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
template<typename T> using pbds_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

#define ll long long int 
#define pr cout<<"\n";

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        pbds_set<int>st;
        ll sum=0;
        for(int i=n-1;i>=0;i--){
            st.insert(v[i]);
            int x =st. order_of_key(v[i]);
            sum=sum+x;
        }
        cout<<sum;pr
    }
return 0;
}
