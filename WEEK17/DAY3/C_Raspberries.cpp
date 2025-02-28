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
        int n,k;
        cin>>n>>k;
        int ans=INT_MAX;
        int even=0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0){
                even++;
            }
            if(v[i]%k==0){
                ans=0;
            }
            ans=min(ans, k -(v[i]%k) );
        }
       if(k==4){
            if(even>=2){
                cout<<0;
            }else if(even==1){
                cout<<min(1,ans);
            }else if(even==0){
                cout<<min(ans,2);
            }
       }else{
        cout<<ans;
       }
       pr
       
       
       
       
       
       
       
       
       
       
     

    }

return 0;
}