/*
https://codeforces.com/contest/1104/problem/B
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
    string s;
    cin>>s;
    ll cnt=0;
    vector<int>ex_ind;
    int n=s.size() ;
    stack<char>st;
    for(int i=0;i<n;i++){
        if(!st.empty()){
            if(st.top()==s[i]){
                cnt++;
                st.pop();
            }else{
                st.push(s[i]);
            }
        }else{
            st.push(s[i]);
        }
    }
    if(cnt%2==0){
        cout<<"No\n";   
    }else{
         cout<<"Yes\n";
    }
return 0;
}