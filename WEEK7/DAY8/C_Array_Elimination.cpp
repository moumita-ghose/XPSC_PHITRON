#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<int,int>mp; // ind ,cnt
        for(int i=0;i<n;i++){
            for(int j=64;j>=0;j--){
                if(((v[i]>>j)&1)==1){
                    mp[j]++;
                }
            }
        }
        int g = 0;
        for(int i=0;i<64;i++){
            g = __gcd(g,mp[i]);
        }
        for(int i=1;i<=n;i++){
            if(g%i==0){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}