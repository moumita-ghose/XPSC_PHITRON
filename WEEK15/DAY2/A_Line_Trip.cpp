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
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans =0;
        ans=max(ans,v[0]);
        for(int i=1;i<n;i++){
           int  df =v[i]-v[i-1];
        //    cout<<v[i]<<"-> "<<v[i-1];
        //    pr 
            ans=max(ans,df);
        }
        int lst = 2* (x-v[n-1]);
        ans=max(ans,lst);
        cout<<ans;
        pr;
    }   

return 0;
}