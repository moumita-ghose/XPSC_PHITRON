/*

https://codeforces.com/contest/1796/problem/B

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
        string a,b;
        cin>>a>>b;
        int n=a.size(),m=b.size();
        if(a==b){
            cout<<"YES\n";
            cout<<a;
            pr
            continue;
        }else if(a[0]==b[0]){
            cout<<"YES\n";
            cout<<a[0]<<"*";
            pr
            continue;
        }else if(a[n-1]==b[m-1]){
            cout<<"YES\n";
            cout<<"*"<<a[n-1]<<"\n";
            continue;
        }
        bool fg = false;
        for(int i=0;i<n-1;i++){
            string sub =a.substr(i,2);
            // cout<<sub<<" ";
            if(b.find(sub) !=string::npos){
                fg=true;
                cout<<"YES\n"<<"*"<<sub<<"*\n";
                break;
            }
        }
        if(fg==false){
            cout<<"NO\n";
        }

    }
return 0;
}