#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
#define ll long long int 
#define pr cout<<"\n";
template<typename T> using pbds_multiset = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
template<typename T> using pbds_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

vector<int>&dfs(int root,string &s,vector<int>&ans , vector<vector<int>>&bt)
{
    int l = bt[root][0];
    int r = bt[root][1];
    if(l!=0){
        char direction = s[root-1];
        if(direction!='L'){
            ans[l]=ans[root]+1;
        }else {
            ans[l]=ans[root];
        }
        dfs(l,s,ans,bt);
    }
    if(r!=0){
        char dire=s[root-1];
        if(dire!='R'){
            ans[r]=ans[root]+1;
        }else{
            ans[r]=ans[root];
        }
        dfs(r,s,ans,bt);
    }
    return ans;
}

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
        string s;
        cin>>s;
        vector<vector<int>>bt(n+1);
        for(int i=1;i<=n;i++){
            int l,r;
            cin>>l>>r;
            bt[i].push_back(l);
            bt[i].push_back(r);
        }
        vector<int>op(n+1 ,0);
        // for(int i=1;i<=n;i++){
        //     cout<<i << " -> ";
        //     vector<int>dm=bt[i];
        //     cout<<dm[0]<<" "<<dm[1]<<"\n";
        // }
        int x = INT_MAX; 
        op = dfs(1,s,op,bt);
        for(int i=1;i<n+1;i++){
            int l=  bt[i][0],r=bt[i][1];
            if(l==0 && r==0){
                // cout<<op[i]<<" ";
                x=min(x,op[i]);
            }
        }
        cout<<x;
        // pr 
        pr

    }   

return 0;
}