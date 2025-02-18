/*

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
        int n,c,q;
        cin>>n>>c>>q;
        string s;
        cin>>s;
        vector<ll>a(c+1);
        vector<ll>b(c+1);
        vector<ll>df(c+1);
        // df[0]=0;
        a[0]=0;
        b[0]=n;
        for(int i=1;i<=c;i++){
            ll l,r;
            cin>>l>>r;
            l--;
            r--;
                a[i]=b[i-1];
                b[i]=a[i]+(r-l+1);
                df[i]=a[i]-l;
        }

        for(int i=0;i<q;i++){
            ll k;
            cin>>k;
            k--;

            for(int i=c;i>=1;--i){
                if(k<a[i]){
                    continue;
                }else{
                    k=k-df[i];
                }
            }
            cout<<s[k];
            pr
        }
    }   

return 0;
}