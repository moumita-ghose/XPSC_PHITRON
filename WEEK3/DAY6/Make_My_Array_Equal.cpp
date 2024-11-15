/*
link : https://www.codechef.com/problems/MEBA
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
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]!=0){
                mp[v[i]]++;
            }
        }
        if(mp.size()==1 || mp.size()==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}