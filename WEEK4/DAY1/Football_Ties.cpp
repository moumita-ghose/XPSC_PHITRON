/*
link : https://www.codechef.com/problems/FOOTBALLTIES
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int ans = 0;
        if(x<3 || y <3){
            ans = min(x,y);
        }else{
            int a= x%3;
            int b=y%3;
            // cout<<a<<" "<<b<<endl;
            ans= min(a,b);
        }
        cout<<ans<<endl;
    }
    return 0;
}