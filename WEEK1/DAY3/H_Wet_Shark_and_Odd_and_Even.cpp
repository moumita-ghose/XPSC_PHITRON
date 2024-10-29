/*
problem link : https://vjudge.net/contest/666748#problem/H
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long >v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<long long >odd;
    vector<long long >even;
    long long ans=0;
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            ans=ans+v[i];
            even.push_back(v[i]);
        }else{
            odd.push_back(v[i]);
        }
    }
    if(odd.size()%2==0){
        for(int i=0;i<odd.size();i++){
            ans=ans+odd[i];
        }
    }else{
        sort(odd.begin(),odd.end());
        for(int i=1;i<odd.size();i++){
            ans=ans+odd[i];
        } 
    }
    cout<<ans<<endl;

    return 0;
}