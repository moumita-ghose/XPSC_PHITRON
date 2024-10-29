/*
problem link : https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    map<char,int>mp;

    for(int i=0;i<26;i++){
        char c = 'a'+i;
        // cout<<c<<" ";
        mp[c]=0;
    }

    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
    }
    char ans ;
    int f=0;
    for(auto it= mp.begin();it!=mp.end();it++){
        if(it->second == 0){
            f=1;
            ans=it->first;
            break;
        }
        // cout<<it->first<<" "<<it->second<<endl;
    }
    if(f==1){
        cout<<ans<<endl;
    }else{
        cout<<"None"<<endl;
    }
    return 0;
}