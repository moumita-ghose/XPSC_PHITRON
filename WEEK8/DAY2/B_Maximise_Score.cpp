
/*
    https://www.codechef.com/problems/MAXIMSCORE
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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>df(n-1);
        for(int i=0;i<n-1;i++){
            df[i]=abs(v[i]-v[i+1]);
        }
        int ans =INT_MAX;
        if(n>=2){
            ans=min(ans,df[0]);
        }
        if(n>=2){
            ans=min(ans,df[n-2]);
        }
        for(int i=0;i<n-2;i++){
            int mx = max(df[i],df[i+1]);
            ans= min(ans,mx); 
        }
        cout<<ans<<endl;
    }
    return 0;
}