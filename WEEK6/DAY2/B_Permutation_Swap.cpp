/*
https://codeforces.com/problemset/problem/1828/B
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
        vector<int>v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        int ans = 0;
        for(int i=1;i<=n;i++){
            ans = __gcd(abs(v[i]-i ), ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}