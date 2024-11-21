/*
link : https://codeforces.com/problemset/problem/1729/B
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
        string  s ;
        cin>>s;

        map<int,char>mp;
        for(int i=1;i<=26;i++){
            char ch = 'a'+i-1;
            mp[i]=ch;
        }
        string ans ;
        // for(int i=0;i<n-3;i++){
        //     if((i+2)<n && s[i+2]=='0'){
        //         // cout<<s[i]<<" ";
        //         int ind = (s[i]-'0')*10 + (s[i+1]-'0') ;
        //         ans.push_back(mp[ind]);
        //         i=i+3;
        //     }else{
        //         int ind = (s[i]-'0');
        //         ans.push_back(mp[ind]);
        //     }
        // }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0' ){
                int ind = (s[i-2]-'0')*10 + (s[i-1]-'0');
                // cout<<ind<<" "; 
                ans.push_back(mp[ind]);
                
                i=i-2;
            }else{
                int ind = (s[i]-'0');
                // cout<<ind<<" ";
                ans.push_back(mp[ind]);
            }
        }
        // cout<<endl<<endl;
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
        
    }
    return 0;
}