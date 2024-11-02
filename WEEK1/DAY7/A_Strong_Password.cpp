/*
link : https://codeforces.com/problemset/problem/1997/A
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
        int ind =-1;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1]){
                ind = i+1;
                break;
            }
        }
        string ans;
        if(ind !=-1){
            for(int i=0;i<s.size();i++)
            {
                
                if(i==ind){
                    char ch = s[i]+1;
                    ans.push_back(ch);
                }
                    ans.push_back(s[i]);
                
            }
        }else{
            for(int i=0;i<s.size();i++){
                ans.push_back(s[i]);
            }
            ans .push_back(s[0]+1);
        }
        cout<<ans<<endl;
    }
    return 0;
}