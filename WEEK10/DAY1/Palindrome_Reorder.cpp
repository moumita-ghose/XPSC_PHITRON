/*
https://cses.fi/problemset/task/1755/
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s ;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    int oddcnt=0;
    char oddchar= ' ';
    int oddtotal=0;
    for(auto it = mp.begin();it!=mp.end();it++){
        if(it->second%2!=0){
            oddcnt++;
            oddchar=it->first;
            oddtotal=it->second;
        }   
    }
    string ans ;
    string f,l,m;
    if(oddcnt>1){
        cout<<"NO SOLUTION\n";
    }else{
        for(auto it = mp.begin();it!=mp.end();it++)
        {
            if(it->second%2!=0){
                for(int i=0;i<it->second;i++){
                    m.push_back(it->first);
                }
            }else{
                for(int i=0;i<(it->second)/2;i++){
                    f.push_back(it->first);
                }
            }
        }
        l=f;
        reverse(l.begin(),l.end());
        ans= f+m+l;
        cout<<ans<<endl;
    }
    return 0;
}