#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>v(m+1);
    for(int i=0;i<m+1;i++)
    {
        cin>>v[i];
    }
    vector<int>f;
    for(int i=0;i<n;i++){
        // cout<<((v.back()>>i)&1)<<" ";
        f.push_back((v.back()>>i)&1);
    }
    int ans = 0;
    for(int i=0;i<m;i++){
        int x = v[i];
        vector<int>tmp;
        for(int j=0;j<n;j++){
            // cout<<((v.back()>>i)&1)<<" ";
            tmp.push_back((x>>j)&1);
        } 
        // cout<<x<<" -> ";
        int df = 0;
        for(int k=0;k<n;k++){
            if(tmp[k]!=f[k]){
                df++;
            }
        } 
        // cout<<endl;
        if(df<=k){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}