/*
https://cses.fi/problemset/task/1641/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int



int main()
{
    int n;
    ll x;
    cin>>n>>x;
    vector<pair<ll,int>>v;
    map<int,int>mp; // val,ind
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back({x,i+1}) ;
    }
    sort(v.begin(),v.end());
   
    // for(int i=0;i<n;i++){
    //     cout<<v[i].first <<" -> "<<v[i].second<<endl;
    // }
   
    for(int i=0;i<n;i++){
        int l=i+1,r=n-1;
        ll target= x-v[i].first;
        while(l<r){
            ll sum = v[l].first+v[r].first;
            if(sum== target){
                cout<<v[i].second<<" "<<v[l].second<<" "<<v[r].second<<endl;
                return 0;
                // break;

            }else if(sum>target){
                r--;
            }else{
                l++;
            }
        }
    }
    cout<<"IMPOSSIBLE\n";
    return 0;
}