/*
link : https://www.codechef.com/problems/ALTTAB
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    deque<string>dq;
    map<string,int>mp;
    while(t--)
    {
        string s ;
        cin>>s;
        dq.push_back(s); 
        mp[s]++;      
    }
    string ans;
    reverse(dq.begin(),dq.end());
    for(int i=0;i<dq.size();i++){
        string x = dq[i];
        if(mp[x]!=-1){
            string tmp = x;
            char se = tmp.back();
            tmp.pop_back();
            char fi = tmp.back();
            tmp.pop_back();
            cout<<fi<<se; 
            mp[x]=-1;
        }
    }
   
    return 0;
}