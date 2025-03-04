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
        ll x,y,k;
        cin>>x>>y>>k;
        ll ans=0;
        if(x>y){
            ll opx = ceil((x*1.0)/k);
            ll opy=ceil( (y*1.0)/k);
             ans= opx + max(opx-1,opy);
        }else if(x<y){
            ll opy = ceil ((y*1.0)/k);
            ll opx=ceil( (x*1.0)/k);
             ans =opy +max(opx,opy);
        }else{
            ans=ceil((x*1.0)/k)+ceil((y*1.0)/k);
        }
        cout<<ans;
        pr
    }

return 0;
}