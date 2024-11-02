/*
problem link : https://codeforces.com/contest/918/problem/B
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    map<string,string> mp;
    for(int i=0;i<n;i++)
    {
        string name,ip;
        cin>>name>>ip;
        mp[ip]=name;
    }

    for(int i=1;i<=q;i++){
        string name2,ip2;
        cin>>name2>>ip2;
        ip2.pop_back();
        cout<<name2<<" "<<ip2<<"; #"<<mp[ip2]<<endl;
    }
    return 0;
}