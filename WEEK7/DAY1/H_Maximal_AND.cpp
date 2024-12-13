#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        int maxbit  =  0;

        for(int i=0;i<n;i++){
            cin>>v[i];
            maxbit=max(maxbit,__lg(v[i]));
        }
        // cout<<maxbit<<endl;
        int ans = 0;
        for(int i=0;i<n;i++){
            cout<<v[i]<<" -> ";
            for(int  k=maxbit;k>=0;k--){
                if((v[i]>>k)&1){
                    cout<<1<<" ";
                }else{
                    cout<<0<<" ";
                }
                // cout<<((v[i]>>k)&1);
                
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}