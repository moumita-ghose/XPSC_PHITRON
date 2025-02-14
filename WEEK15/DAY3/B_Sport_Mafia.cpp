#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
#define ll long long int 
#define pr cout<<"\n";
template<typename T> using pbds_multiset = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
template<typename T> using pbds_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

int check(int mid,int n,int k)
{
    ll put=n-mid;
    ll sum_of_put= (put*(put+1))/2;
    ll after_eat=sum_of_put-mid;
    if(after_eat==k){
        return 0;
    }else if(after_eat>k){
        return 1;
    }else{
        return -1;
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin>>n>>k;
    ll l=0,r=n;
    while(l<=r){
        ll mid= (l+r)/2;
        if(check(mid,n,k)==0){
            cout<<mid<<"\n";
            break;
        }else if(check(mid,n,k)==1){
            l=mid+1;

        }else{
            r=mid-1;

        }
    }

return 0;
}