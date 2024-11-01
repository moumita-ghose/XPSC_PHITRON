#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<char>st;
        map<char,char>mp;
        for(int i=0;i<n;i++)
        {
            st.insert(s[i]);
        }

        auto i=st.begin();
        auto j = st.rbegin();
        
        while(i!=st.end() && j!=st.rend())
        {   
            mp[*i]=*j;
            mp[*j]=*i;
            i++;
            j++;
        }

        // for(auto k = mp.begin();k!=mp.end();k++)
        // {
        //     cout<<k->first<<" "<<k->second<<endl;
        // }
        // cout<<endl<<endl;
        // string ans;
        for(int i=0;i<n;i++)
        {
            s[i] =  mp[s[i]] ;
        }
        cout<<s<<endl;
    }

    return 0;
}