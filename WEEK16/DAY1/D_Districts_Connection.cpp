/*
https://codeforces.com/problemset/problem/1433/D
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
        int n;
        cin>>n;
        vector<int>v(n);
        set<int>st;
        for(int i=0;i<n;i++){
            cin>>v[i];
            st.insert(v[i]);
        }

        if(st.size()>=2){
            cout<<"YES\n";
            int ds=-1;
            for(int i=0;i<n;i++){
                if(v[0]!=v[i]){
                    cout<<1<<" "<<i+1<<"\n";
                    ds=i;
                }
            }
            for(int i=1;i<n;i++){
                if(v[0]==v[i]){
                    cout<<ds+1<<" "<<i+1<<"\n";
                }
            }

        }else{
            cout<<"NO\n";
        }
    }
return 0;
}