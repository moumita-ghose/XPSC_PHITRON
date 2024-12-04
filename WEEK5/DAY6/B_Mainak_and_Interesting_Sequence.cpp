/*
https://codeforces.com/problemset/problem/1726/B
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
        int n,m;
        cin>>n>>m;

        vector<ll>ans(n);
        if(n>m){
            cout<<"No\n";
        }else{
            
            if(n%2==0 && m%2==0){
                    ll sum = 0;
                  cout<<"Yes\n";
                for(int i=0;i<n-2;i++){
                    ans[i]=1;
                    sum++;
                }
                ans[n-2]=(m-sum)/2;
                ans[n-1]=(m-sum)/2;
                for(int i=0;i<n;i++){
                    cout<<ans[i]<<" ";
                }
                cout<<endl;
            }else if(n%2 == 0 && m%2==1 ){
                cout<<"No\n";
            }else if(n%2==1 && (m%2==0 || m%2==1)){
                cout<<"Yes\n";
                ll sum =0;
                for(int i=0;i<n-1;i++){
                    ans[i]=1;
                    sum++;
                }
                ans[n-1]=(m-sum);
                for(int i=0;i<n;i++){
                    cout<<ans[i]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}