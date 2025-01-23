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
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>b;
        vector<int>c;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<=k){
                b.push_back(x);
            }
        }
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            if(x<=k){
                c.push_back(x);
            }
        }
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        // cout<<"b -> ";
        // for(int i=0;i<b.size();i++){
        //     cout<<b[i]<<" ";
        // }
        // cout<<endl;
        // cout<<"c -> ";
        // for(int j=0;j<c.size();j++){
        //     cout<<c[j]<<" ";
        // }
        // cout<<endl<<endl;

        long long int cnt=0;
        for(int i=0;i<b.size();i++){
            int extra=k-b[i];
            int l=0,r=c.size()-1,howmany=-1;
            while(l<=r){
                int mid=(l+r)/2;
                if(c[mid]<=extra){
                    howmany=mid+1;
                    l=mid+1;
                }else{
                    r=mid-1;
                }
            }
            if(howmany!=-1){
                cnt=cnt+howmany;
            }
        }
        cout<<cnt<<endl;
   }
    return 0;
}

