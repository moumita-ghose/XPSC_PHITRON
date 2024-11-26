/*
link : https://codeforces.com/problemset/problem/1927/B
*/

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
        vector<int>v(n);
        map<char, int>mp;
        
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<26;i++){
            // cout<<char('a'+i)<<" ";
            char ch = char('a'+i);
            mp[ch]=0;    
            
        }
        string ans;
        for(int i=0;i<n;i++){
          
                // mp[]
                for(auto it = mp.begin();it!=mp.end();it++){
                    if(it->second==v[i]){
                        ans.push_back(it->first);
                        // cout<<it->first<<" ";
                        mp[it->first]++;
                        break;
                    }
                }
            
        }
        cout<<ans<<endl;
       
    }

    return 0;
}