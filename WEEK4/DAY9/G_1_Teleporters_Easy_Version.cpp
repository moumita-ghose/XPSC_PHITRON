/*
link : https://codeforces.com/problemset/problem/1791/G1
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
        int n,c;
        cin>>n>>c;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>cnvt(n);

        for(int i=0;i<n;i++){
            cnvt[i]=v[i]+i+1;
        }
        sort(cnvt.begin(),cnvt.end());

        ll sum = 0,ans=0;

        for(int i=0;i<n;i++){
        
            if(sum+cnvt[i]>c){
                break;
            }
            sum+=cnvt[i];
            ans++;
        }

        cout<<ans<<endl;
    }
    return 0;
}