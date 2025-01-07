/*
https://codeforces.com/problemset/problem/1833/B
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>b(n);
        vector<pair <int, int>>a_ind(n); // a- - -> a val,ind
        vector<pair <int, int>>b_ind(n); // b - -> a val,ind
        for(int i=0;i<n;i++){
            cin>>a[i];
            a_ind[i]={a[i],i};
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            b_ind[i] ={b[i],i};
        }
        sort(b_ind.begin(),b_ind.end());
        sort(a_ind.begin(),a_ind.end());
        vector<ll>ans(n);
        // cout<<"a -> ";
        for(int i=0;i<n;i++){
            ans[a_ind[i].second]=b_ind[i].first;
            // cout<<a_ind[i].first<<" ";
            // cout<<a_ind[i].first<<" -> ind : "<<a_ind[i].second<<endl;
        }
        // cout<<endl<<"b -> ";
        // for(int i=0;i<n;i++){
        //     cout<<b_ind[i].first<<" ";
        //     // cout<<a_ind[i].first<<" -> ind : "<<a_ind[i].second<<endl;
        // }
        // cout<<endl<<endl;
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }     
    return 0;
}