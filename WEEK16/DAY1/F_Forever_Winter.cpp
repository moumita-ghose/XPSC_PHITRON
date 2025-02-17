/*
https://codeforces.com/problemset/problem/1829/F
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
        int n,m;
        cin>>n>>m;
        vector<vector<int>>v(n+1);
        while(m--)
        {   
            int u,vv;
            cin>>u>>vv;
            v[u].push_back(vv);
            v[vv].push_back(u);
        }
        int y=0,x=0;
        for(int i=0;i<n+1;i++){
            // cout<<i<<" -> ";
            vector<int>dm=v[i];
            if(dm.size()==1){
                int lfprt= dm[0];
                y=v[lfprt].size()-1;
                vector<int>cur=v[lfprt];
                for(int i=0;i<cur.size();i++){
                    vector<int>fprt=v[cur[i]];
                    if(fprt.size()>1){
                        
                        x =fprt.size();  
                    }
                }
            }
            // for(int j=0;j<dm.size();j++){
            //     cout<<dm[j]<<" ";
            // }
            // pr
        }
        cout<<x<<" " <<y;
        pr 
    }
return 0;
}