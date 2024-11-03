/*
problem link : https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    long long  cnt = 0;
    for(int i=0;i<s.size();i++)
    {

        if(s[i]!=t[i]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}