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
        int x,n,m;
        cin>>x>>n>>m;
        int dv=x;
        for(int i=1;i<=n;i++){
            dv=(dv/2)+10;
        }
        int minus=dv-(10*m);
        // cout<<dv<<endl;

        int ad =x-(10*m);
        if(ad<=0){
            cout<<"YES\n";
        }else{
            if(dv<=0){
                cout<<"YES\n";
            }else if(minus<=0){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}

