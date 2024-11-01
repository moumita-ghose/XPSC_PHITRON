/*
problem link : https://codeforces.com/contest/903/problem/C
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    // int cnt =0;
    map<int,int>mp;
    for(int i=0; i<n  ; i++)
    {
            mp[v[i]]++;
    }
    int ans=0,tmp;

    for(auto it=mp.begin();it!=mp.end();it++)
    {
        tmp = it->second;
        ans=max(ans,tmp);
    }
    cout<<ans<<endl;
    // if(mp.size()>1){
    //     for(auto i=mp.begin();i!=mp.end();i++)
    //     {
    //     // cout<<i->first<<" "<<i->second<<endl;
    //         if(i->second==1){
    //             cnt=1;
    //         }else{
    //             cnt=cnt+(i->second-1);
    //         }
    //     }
    // }else{
    //     auto it = mp.begin()->second;
    //     cnt=it;
    // }
 
    // cout<<cnt<<endl;
    return 0;
}