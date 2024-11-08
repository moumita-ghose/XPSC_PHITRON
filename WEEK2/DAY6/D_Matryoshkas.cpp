/*
link : https://codeforces.com/problemset/problem/1790/D
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
        map<int,int>mp;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            
            cin>>v[i];
            mp[v[i]]++;
        }
        sort(v.begin(),v.end());
       int ans =0;
       for(int i=0;i<n;i++){
        if(mp[v[i]]!=0){
            int val= v[i];
            while(mp[val]>0){
                
                mp[val]--;
                val++;
            }
            ans++;
        }
       }
       cout<<ans<<endl;
    }
    return 0;
}