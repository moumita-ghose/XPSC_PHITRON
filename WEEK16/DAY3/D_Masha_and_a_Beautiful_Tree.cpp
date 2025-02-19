/*
https://codeforces.com/contest/1741/problem/D
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

vector<int>v;
int ans=0;
void divide_and_conqure(int l1,int r1, int l2,int r2)
{
    
    int lmax=0,rmin=INT_MAX;
    for(int i=l1;i<r1;i++){
        lmax=max(lmax,v[i]);
    }

    for(int i=l2;i<r2;i++){
        rmin=min(rmin,v[i]);
    }

    if(lmax>rmin){
        int cnt=l2;
        for(int i=l1;i<r1;i++){
            swap(v[i],v[cnt]);
            cnt++;
        }
        ans++;
    }
    if(l1==r1){
        return;
    }
    int mid= (l1+r1)/2;
    int mid2 = (l2+r2)/2;
    divide_and_conqure(l1,mid,mid,r1);
    
    divide_and_conqure(l2,mid2,mid2,r2);
}

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
        v.clear();
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
       
        // for(int i=0;i<n;i++){
        //     cout<<v[i]<<" ";
        // }
        // pr
       

        if(is_sorted(v.begin(),v.end())){
            cout<<0<<"\n";
            continue;
        }
        int mid=(0+n)/2;
        ans=0;
        divide_and_conqure(0,mid,mid,n);
        if(is_sorted(v.begin(),v.end())){
            cout<<ans<<"\n";
        }else{
            cout<<"-1\n";
        }



    }
return 0;
}