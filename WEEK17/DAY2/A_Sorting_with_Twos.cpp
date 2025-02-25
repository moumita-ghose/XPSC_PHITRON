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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(is_sorted(v.begin(),v.end())==true){
            cout<<"YES\n";
        }else{
            int p=1,j=0;
            bool fg=true;
            while(j<n)
            {
                for(int i=j+1;i<min(n,p);i++){
                    if(v[i-1]>v[i]){
                        fg=false;
                        break;
                    }
                }
                j=p;
                p=p*2;
            }
            if(fg==true){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
return 0;
}