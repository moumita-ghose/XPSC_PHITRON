/*
https://codeforces.com/problemset/problem/1665/B
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        vector<ll>v(n);
        map<ll ,int>mp; // val,cnt
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
         if(mp.size()==1){
            cout<<0<<endl;
            continue;
        }

        int mx_cnt = INT_MIN,mx_val;
        for(auto it = mp.begin();it!=mp.end();it++){
            if(mx_cnt<it->second){
                mx_val=it->first;
                mx_cnt=it->second;
            }
        }
        // cout<<mx_val<<" -> "<<mx_cnt<<endl;
        
        ll op =0;
        ll freq = mx_cnt;
        while(freq<n){

            op++;
            if(n-freq>=freq){
                op+=freq;
                freq=freq*2;
            }else{
                op+=(n-freq);
                break;
            }
        }
        cout<<op<<endl;

    }
    
    return 0;
}