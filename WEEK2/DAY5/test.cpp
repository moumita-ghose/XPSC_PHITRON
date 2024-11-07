/*
problem link : https://codeforces.com/problemset/problem/1986/C
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        set<int>st;
        for(int i=1;i<=m;i++)
        {
            int x;
            cin>>x;
            st.insert(x);
        }
        string c;
        cin>>c;
        sort(c.begin(),c.end());
        int j=0;
        for(auto it = st.begin();it!=st.end();it++){
            int ind = *it;
            s[ind-1]=c[j];
            j++; 
        }
        cout<<s<<endl;
    }
    return 0;
}