/*
https://codeforces.com/problemset/problem/1747/B
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
        string s;
        for(int i=0;i<n;i++){
            s.push_back('B');
            s.push_back('A');
            s.push_back('N');
        }
        int i=0,j=s.size()-1,cnt=0;
        vector<pair<int,int>>p;
        while(i<j){
            swap(s[i],s[j]);
            p.push_back({i+1,j+1});
            i=i+3;
            j=j-3;
            cnt++;
        }
        cout<<cnt<<endl;
        for(int i=0;i<p.size();i++){
            cout<<p[i].first<<" "<<p[i].second<<endl;
        }
        // cout<<s<<endl;
    }
    return 0;
}