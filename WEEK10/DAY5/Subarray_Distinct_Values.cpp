/*
https://cses.fi/alon/task/2428
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l=0,r=0;
    ll cnt=0;
     //val,cnt
    map<int,ll>mp; 
    while(l<n){
        // cout<<" size -> " <<mp.size()<<endl;
        while(r<n && (mp.size()<k  || mp.count(v[r])>0)) {
            mp[v[r]]++;
            r++;
        }
        cnt=cnt+(r-l);
        mp[v[l]]--;
        if(mp[v[l]]==0){
            mp.erase(v[l]);
        }
        l++;
    }
    cout<<cnt<<endl;
    return 0;
}