#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        map<char,int>mp;
        string s;
        cin>>s;
        string up,low,ans;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]=i;
            if(s[i]>='A' && s[i]!='B' && s[i]<='Z'){
                up.push_back(s[i]);

            }else if(s[i]=='B'){
                if(!up.empty()){
                   s[ mp[up.back()]]='$';
                   s[i]='$';
                    up.pop_back();
                }
            }else if(s[i]>='a'&& s[i]!='b' &&s[i]<='z'){
                low.push_back(s[i]);
            }else if(s[i]=='b'){
                if(!low.empty()){
                    s[mp[low.back()]]='$';
                    s[i]='$';
                    low.pop_back();
                }
            }
            
        }
        // cout<<up+low<<endl;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='$' || (s[i]== 'B' ||s[i]=='b')){
                continue;
            }else{
                cout<<s[i];
            }
        }
        cout<<endl;
        
    }
    return 0;
}

