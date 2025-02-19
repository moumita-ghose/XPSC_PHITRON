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
    int root;
    cin>>n;
    vector<vector<int>>v(n+1);
    vector<int>bad_child(n+1),itself_bad(n+1) ;
    for(int i=1;i<=n;i++){
        int p,r;
        cin>>p>>r;
        if(p==-1){
            root=i;
        }else{
            v[p].push_back(i);
        }
        if(r==1){
            bad_child[p]++;
            itself_bad[i]=1;
        }
    }   
    vector<int>ans;
    for(int i=1;i<=n;i++){
        // cout<<bad_child[i]<<" ";
        if(i!=root){
            if(itself_bad[i]==1 && v[i].size()==bad_child[i]){
                // cout<<i<< " ";
                ans.push_back(i);
            }
        }
    }
    if(ans.size()==0){
        cout<<"-1\n";
    }else{
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";

    }

return 0;
}