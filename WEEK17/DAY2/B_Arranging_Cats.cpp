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
    while (t--)
    {
    
        int n;
        cin>>n;
        string s,f;
        cin>>s>>f;
        int wrO=0,wrZ=0;
        for(int i=0;i<n;i++){
            if(f[i]=='1' && s[i]=='0'){
                wrZ++;
            }else if(f[i]=='0' && s[i]=='1'){
                wrO++;
            }
        }
        cout<<max(wrZ,wrO)<<"\n";

    }
    

return 0;
}