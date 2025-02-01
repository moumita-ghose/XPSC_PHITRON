#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define pr cout<<"\n";
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T> using pbds_multiset = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
template<typename T> using pbds_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>ans;
    pbds_set<pair<int,int>>ml;
    int l=0,r=0;
    while(r<n){
         ml.insert({ v[r],r});
        if( (r-l+1) == k){
          
            int pos = k/2;
            if(k%2==0){
                pos--;
            }
            auto ind = ml.find_by_order( pos);
            ans.push_back( ind->first);
            cout<<ind->first<<" ";
            auto ind2 = ml.find_by_order(l);
            ml.erase({v[l],l});
            l++;
        }
     
        r++;
    }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
return 0;
}
