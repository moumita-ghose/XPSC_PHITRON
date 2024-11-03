/*
link https://codeforces.com/contest/1997/problem/A
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ind=-1;
        string ans; 
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                ind = i+1;
                break;
            }
        }
        if(ind!=-1){
            for(int i=0;i<s.size();i++)
            {
                if(ind==i && s[i]!='z'){
                    char ch = s[i]+1;
                    ans.push_back(ch);
                }else if(ind==i &&s[i]=='z'){
                    char ch = 'a';
                    ans.push_back(ch);
                }
                ans.push_back(s[i]);
            }
        }else{
            ans=s;
            if(s.back()!='z'){
                char ch = s.back()+1;
                ans.push_back(ch);    
            }else if (s.back()=='z') {
                char ch = 'a';
                ans.push_back(ch);
            }
            
        }
        cout<<ans<<endl;
    }
    return 0;
}