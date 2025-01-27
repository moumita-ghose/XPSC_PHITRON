/*
https://codeforces.com/problemset/problem/1516/B
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        int XOR=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            XOR=XOR^v[i];
        }
        if(XOR==0){
            cout<<"YES\n";
            continue;
        }
        vector<int>pre(n+1);
        pre[0]=0;
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]^v[i];
        }
        // for(int i=0;i<pre.size();i++){
        //     cout<<pre[i]<<" ";
        // }
        bool fg = false;
        //partition -> 2
        for(int i=1;i<=n;i++)
        {
            int a = pre[i];
            int b=a^pre[n];
            if(a==b){
                fg=true;
                break;
            }
        }
        // par->3
        for(int i=1;i<=n;i++){
            int a=pre[i];
            for(int j=i+1;j<=n;j++){
                int b = pre[i]^pre[j];
                int c = pre[j]^pre[n];
                if(a==b && b==c){
                    fg=true;
                    break;
                }
            }
        }
        if(fg==true){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }



        // cout<<"\n";

    }
    return 0;
}

