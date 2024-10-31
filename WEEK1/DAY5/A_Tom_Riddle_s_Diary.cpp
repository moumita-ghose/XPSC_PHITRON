/*
link : https://codeforces.com/contest/855/problem/A
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    vector<string>v(t);

    map<string,int>mp;
    for(int i=0;i<t;i++)
    {
        cin>>v[i];
        mp[v[i]]++;
        // cout<<mp[v[i]]<<endl;
        if(mp[v[i]]==1){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    
   
    return 0;
}