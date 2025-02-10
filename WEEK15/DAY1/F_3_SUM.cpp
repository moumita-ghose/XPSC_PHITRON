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
    while(t--){
        
        int n;
        cin>>n;
        
        vector<int>v(n);
        
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        vector<int>lst;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x = v[i]%10;
            if(mp[x]<3){
                lst.push_back(x);
                mp[x]++;
            }
        }

        // for(int i=0;i<lst.size();i++){
        //     cout<<lst[i]<<" ";
        // }
        bool fg=  false;
        for(int i=0;i<lst.size();i++){
            for(int j=i+1;j<lst.size();j++){
                for(int k = j+1;k<lst.size();k++){
                    int sum =lst[i]+lst[j]+lst[k];
                    if(sum==3 || sum==13 ||sum==23){
                        fg= true;
                        break;
                    }
                }
            }

        }
        if(fg==true){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

        // pr
        // pr

    }

return 0;
}