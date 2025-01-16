/*
https://codeforces.com/problemset/problem/1928/B
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>v;
         set<ll>st;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;     
            st.insert(x);
        }
       
        for(auto  it=st.begin();it!=st.end() ;it++){
            v.push_back(*it);
        }
        int cnt=0;
        for(int i=0;i<v.size();i++){
            ll cur = v[i];
            auto it = lower_bound(v.begin(),v.end(),cur+n);
            int currind = it -v.begin()-i;
            cnt=max(cnt,currind); 
        }
        cout<<cnt<<endl;

       
    }

    return 0;
}