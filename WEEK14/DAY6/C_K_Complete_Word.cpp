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
        string s;
        cin>>s;
        ll ans=0;

        for(int i=0;i<k/2;i++){
            vector<int>cnt(26,0);
            for(int j=0;j+k-1<n;j=j+k){
                int i1=i+j;
                int i2 = j+(k-i-1);
                cnt[s[i1]-'a']++;
                cnt[s[i2]-'a']++;
            }
            int mx = *max_element(cnt.begin(),cnt.end());
        int rq = 2*(n/k);
        int chng=rq-mx;
        ans=ans+chng;
        }
        
    
        if(k%2==1){
            vector<int>cnt2(26,0);
            for(int i=k/2;i<n;i=i+k){
                cnt2[s[i]-'a']++;
            }
            int rq2 = (n/k);
            int mx2 = *max_element(cnt2.begin(),cnt2.end());
            int cng2 = rq2-mx2;
            ans+=cng2;
        }
        cout<<ans;
        pr

    }       

return 0;
}