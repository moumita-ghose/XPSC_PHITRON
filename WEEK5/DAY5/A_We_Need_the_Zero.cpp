/*
https://codeforces.com/problemset/problem/1805/A
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
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
        ll x = 0;
        for(int i=0;i<n;i++){
            x=x^v[i];
        }
        ll y =0;
        for(int i=0;i<n;i++){
            v[i]=v[i]^x;
        }
        for(int i=0;i<n;i++){
            y=y^v[i];
        }
        if(y==0)
            cout<<x<<endl;
        else 
            cout<<-1<<endl;
    }
    return 0;
}