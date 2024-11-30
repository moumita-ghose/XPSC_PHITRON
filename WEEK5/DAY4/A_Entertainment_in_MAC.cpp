/*
link : https://codeforces.com/problemset/problem/1935/A
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
        string s ;
        cin>>s;
        
        string tmp= s;
        reverse(tmp.begin(),tmp.end());
        cout<<min(s,tmp+s)<<endl;
        
    }
    return 0;
}