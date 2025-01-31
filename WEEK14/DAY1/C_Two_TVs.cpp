#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define pr cout<<"\n";

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
    int n;
    cin>>n;
    map<int,int>mp;
    while(n--)
    {
        int l,r;
        cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }
    ll sum=0;
    bool fg =true;

    for(auto it =mp.begin();it!=mp.end();it++){
        sum+=it->second;
        if(sum>2){
            fg=false;
            break;
        }
    }
    if(fg==true){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

return 0;
}
