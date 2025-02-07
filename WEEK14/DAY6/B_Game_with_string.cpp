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
    
    string s;
    cin>>s;
    int n=s.size();
    ll cnt=0;
    vector<int>extra_ind;
    for(int i=0;i<s.size();i=i+1){
        // cout<<i<<" \n";
        if( i+1<=n && s[i]==s[i+1]){
            // cout<<i<<" -> "<<i+1<<"\n";
            cnt++;
            i++;
        }else{
            extra_ind.push_back(i);
            // extra_ind.push_back(i+1);
            // i++;
        }
    }
   
    if(extra_ind.size()>1){
        for(int i=0;i<extra_ind.size()-1;i++){
            if(s[extra_ind[i]]==s[extra_ind[i+1]]){
                // cout<<extra_ind[i]<<" -> "<<extra_ind[i+1]<<"\n";
                cnt++;
            }
        } 
    }
    // cout<<cnt<<"\n";

    if(cnt%2==0){
        cout<<"No\n";
    }else{
        cout<<"Yes\n";
    }
return 0;
}