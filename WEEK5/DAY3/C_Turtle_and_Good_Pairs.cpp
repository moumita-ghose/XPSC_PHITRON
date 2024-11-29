/*
https://codeforces.com/problemset/problem/2003/C
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin >> s;
        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        string  ans(n,' ');
        vector<pair<char,int>>v(mp.begin(),mp.end());

        sort(v.begin(),v.end(),[](const pair<int,int>&a,const pair<int,int>&b){return a.second>b.second;});
        int ind = 0,indtrack=1;
        // for(auto it = v.begin();it!=v.end();it++){
        //     cout<<it->first<<" -> "<<it->second<<endl;
        // }
        // cout<<endl;

        for(auto it = v.begin();it!=v.end();it++){
            // cout<<it->first<<" -> "<<it->second<<endl;
            int cnt =it->second;
            // if(ind >=n){
            //     ind=1;
            // }
            for(int i=1;i<=cnt;i++){
                if(ind >=n){
                    ind=1;
                }
                ans[ind]=it->first;
                ind=ind+2;
            }
                
        }
        cout<<ans<<endl;//<<endl;
    }
    return 0;
}