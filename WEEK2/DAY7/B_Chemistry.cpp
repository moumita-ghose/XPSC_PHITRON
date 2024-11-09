/*
link : https://codeforces.com/problemset/problem/1883/B
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int odd =0;
        for(auto it = mp.begin();it!=mp.end();it++){
            if(it->second%2==1){
                odd++;
            }
        }
        if((odd-k)<=1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}