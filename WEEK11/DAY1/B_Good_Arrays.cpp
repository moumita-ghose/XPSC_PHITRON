/*
https://codeforces.com/problemset/problem/1856/B
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>v(n);
        map<int,ll>one;
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==1){
                one[v[i]]++;
            }
            sum+=v[i];
        }
        if(n==1){
            cout<<"NO\n";
        }else if(( sum - n ) >=one[1] ){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}