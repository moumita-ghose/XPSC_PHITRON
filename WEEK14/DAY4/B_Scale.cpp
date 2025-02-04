/*

https://codeforces.com/problemset/problem/1996/B

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
    while(t--){
        int n,k;
        cin>>n>>k;

        int arr[n][n];
        vector<string>v(n);
        for(int i=0;i<n;i++){
            string s;
            for(int j=0;j<n;j++){
                char ch;
                cin>>ch;
                s.push_back(ch); 
            }
            v[i]=s;
        }
        for(int i=0;i<n;i=i+k){
            string x = v[i];
            for(int j=0;j<x.size();j=j+k){
                cout<<x[j];
            }
            pr
        }
        // pr
    }

return 0;
}