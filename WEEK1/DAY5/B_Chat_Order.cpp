/*
link : https://codeforces.com/problemset/problem/637/B
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<string>s(t);
    for(int i=0;i<t;i++)
    {
        cin>>s[i];
    }
    map<string,int>st;
    for(auto i=t-1;i>=0;i--)
    {
       st[s[i]]++;
    }
    reverse(s.begin(),s.end());

    for(int i=0;i<t;i++)
    {
        if(st[s[i]]>=1){
            cout<<s[i]<<endl;
            // if(st[s[i]>1]){
            //     st[s[i]]=0;
            // }else{
            //     st[s[i]]=0
            // }
            st[s[i]]=0;
        }
        // }else if(st[s[i]]>1){
        //     st[s[i]]=1;
        // }

    }

    // for(auto it = st.begin();it!=st.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    return 0;
}