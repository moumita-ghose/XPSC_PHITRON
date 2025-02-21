

#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
#define ll long long int 
#define pr cout<<"\n";
template<typename T> using pbds_multiset = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
template<typename T> using pbds_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

vector<int>g[4005];

struct Node
{
    int white;
    int black;
};

vector<Node>color;

void dfs(int src,int prt)
{
    for(int i=0;i<g[src].size();i++){
        int child=g[src][i];
        if(child!=prt){
            dfs(child,src);
        }
    }
    if(prt!=-1){
        color[prt].white+=color[src].white;
        color[prt].black+=color[src].black;
    }
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
        for(int i=0;i<=n+2;i++){
            g[i].clear();
        }

        for(int i=2;i<=n;i++){
            int x;
            cin>>x;

            g[x].push_back(i);
        }
        string s;
        cin>>s;

        color.clear();
        color.resize(n+1);
        for(int i=0;i<n+1;i++){
            color[i]={0,0};
        }
        for(int i=0;i<n;i++){
            if(s[i]=='W'){
                color[i+1].white++;
            }else{
                color[i+1].black++;
            }
        }        
        
        dfs(1,-1);
        int ans=0;
        for(int i=1;i<=n;i++){
            if(color[i].black==color[i].white){
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
return 0;
}