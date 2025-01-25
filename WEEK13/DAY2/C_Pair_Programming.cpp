/*
https://codeforces.com/problemset/problem/1547/C
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
        int k,n,m;
        cin>>k>>n>>m;
        vector<int>a(n);
        vector<int>b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        bool flag=true;
        vector<int>ans;
        int inda=0,indb=0,curline=k;
        for(int i=1;i<=(n+m);i++){
         
            if(inda>n-1  && indb>m-1){
                break;
            }
            while(a[inda]<=curline && inda<=n-1){
                if(a[inda]==0){
                    ans.push_back(a[inda]);
                    curline++;
                    inda++;
                }else if(a[inda]<=curline) {
                    ans.push_back(a[inda]);
                    inda++;
                }else{
                    break;
                }
            }

            while(b[indb]<=curline && indb<=m-1){
                if(b[indb]==0){
                    ans.push_back(b[indb]);
                    curline++;
                    indb++;
                }else if(b[indb]<=curline){
                    ans.push_back(b[indb]);
                    indb++;
                }else{
                    break;
                }
            }
        }
         
         
          
        if(inda==n && indb==m ){
            for(int i=0;i<ans.size();i++){
                   cout<<ans[i]<<" ";
               }
               cout<<"\n";
        }else{
            cout<<-1<<"\n";
        }

    }
    return 0;
}

