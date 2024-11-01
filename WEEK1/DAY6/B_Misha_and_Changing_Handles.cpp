/*
link : https://codeforces.com/problemset/problem/501/B
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,string>mp;
    while(n--)
    {
        string s1,s2;
        cin>>s1>>s2;
        bool flag= false;
        for(auto it : mp)
        {
            if(it.second==s1){
                mp[it.first]=s2;
                flag = true;
            }
        }
        if(!flag)
        {
            mp[s1]=s2;
        }
    }
    cout<<mp.size()<<endl;
    for(auto it = mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}