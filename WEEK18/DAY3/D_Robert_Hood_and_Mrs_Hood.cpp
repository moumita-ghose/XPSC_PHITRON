/*
https://codeforces.com/problemset/problem/2014/D
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
        int n,d,k;
        cin>>n>>d>>k;

        // vector<int>day(n+2,0),start(n+2,0),endd(n+2,0);
        vector<int>L[n+1],R[n+1];
        
        for(int i=1;i<=k;i++){
            int l,r;
            cin>>l>>r;
            L[l].push_back(i);
            R[r].push_back(i);
        }
        set<int>st;
        for(int i=1;i<=d;i++){
            for(int j=0;j<L[i].size();j++){
                st.insert(L[i][j]);
            }
        }        

        pair<int,int>bro,mom;
        bro={st.size(),1};
        mom={st.size(),1};
        for(int i=d+1;i<=n;i++){
            for(auto job : R[i-d]){
                st.erase(job);
            }
            for(int j=0;j<L[i].size();j++){
                st.insert(L[i][j]);
            }
            if(st.size()>bro.first){
                bro.first=st.size();
                bro.second=i-d+1;
            }
            if(st.size()<mom.first){
                mom.first=st.size();
                mom.second=i-d+1;
            }

        }
        cout<<bro.second<<" "<<mom.second;
        pr
    }

return 0;
}