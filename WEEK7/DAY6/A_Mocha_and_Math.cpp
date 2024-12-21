#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long >v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long ans = v[0];
        for(int i=1;i<n;i++){
            ans=(ans&v[i]);
        }
        cout<<ans<<endl;

    }
    return 0;
}