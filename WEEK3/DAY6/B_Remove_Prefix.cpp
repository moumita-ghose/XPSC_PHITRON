/*
linK : https://codeforces.com/problemset/problem/1714/B
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }

        int i=0;
        int rem = n;
        int ans =0;
        while(mp.size()!=rem){
            ans++;
            mp[v[i]]--;
            if(mp[v[i]]==0){
                mp.erase(v[i]);
            }
            i++;
            rem--;
        }
    cout<<ans<<endl;
        
    }
    return 0;
}