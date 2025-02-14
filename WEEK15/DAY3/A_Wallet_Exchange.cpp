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
        ll a,b;
        cin>>a>>b;
        ll df = abs(a-b);
        if(a==b){
            cout<<"Bob";
        }else if(df%2==1){
            cout<<"Alice";
        }else if(df%2==0) {
            cout<<"Bob";
        }
        pr
    }
return 0;
}