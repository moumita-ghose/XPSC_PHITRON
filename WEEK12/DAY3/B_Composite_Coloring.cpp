/*
https://codeforces.com/problemset/problem/1332/B
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>allprime;
    vector<bool>check(34,true); 
    
    for(int i=2;i<=33;i++){
        if(check[i]==true){
            for(int j=i+i;j<=33;j=j+i){
                check[j]=false;
            }
        }
    }
    for(int i=2;i<check.size();i++){
        if(check[i]==true){
            allprime.push_back(i);
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<int,vector<int>>factor;
        for(int i=0;i<n;i++){
            for(int j=0;j<allprime.size();j++){
                if(v[i]%allprime[j]==0){
                    factor[allprime[j]].push_back(i);
                    break;
                }
            }

        }
        vector<int>ans(n);
        int color=1;
        for(auto it =factor.begin();it!=factor.end();it++){
            vector<int>dm=it->second;
            for(int i=0;i<dm.size();i++){
                ans[dm[i]]=color;
            }
            color++;
        }
        cout<<factor.size()<<endl;
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}