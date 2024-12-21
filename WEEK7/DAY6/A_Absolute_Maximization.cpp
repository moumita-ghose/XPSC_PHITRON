/*
no : 15
https://codeforces.com/contest/1763/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    // cout<<__lg(1025)<<endl;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

       
        ll OR = v[0];
        ll AND = v[0];
        for(int i=1;i<n;i++){
            OR=(OR|v[i]);
        }
        for(int i=1;i<n;i++){
            AND=(AND&v[i]);
        }

        cout<<abs(AND-OR)<<endl;
    }
    return 0;
}