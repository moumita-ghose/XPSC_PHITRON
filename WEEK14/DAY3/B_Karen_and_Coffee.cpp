/*
https://codeforces.com/problemset/problem/816/B
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
    int n,k,q;
    cin>>n>>k>>q;
    vector<int>v(2000000,0) ;
    for(int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        v[a]++;
        v[b+1]--;
    }
    vector<ll >pre(20000000,0) ;
    for(int i=1;i<v.size();i++){
        // cout<<v[i]<< " ";
        pre[i]=pre[i-1]+v[i];
    }

    for(int i=0;i<pre.size();i++){
        if(pre[i]>=k){
            pre[i]=1;
        }else{
            pre[i]=0;
        }
    }
    vector<ll>pre2(2000000,0) ;
    for(int i=1;i<pre2.size();i++){
        pre2[i]=pre2[i-1]+pre[i];
        
    }
    
   for(int i=1;i<=q;i++){
        int a,b;
        cin>>a>>b;
        ll ans=0;
       cout<<pre2[b]-pre2[a-1];
       pr
   }
return 0;
}