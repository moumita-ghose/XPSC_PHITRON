#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        ll sum=0;
        vector<int>one_zero;
        ll one=0,zero=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0){
                zero++;
            }else if(v[i]==1){
                one++;
            }
            sum=sum+v[i];
        }
        ll ans=one*pow(2,zero);
       
        cout<<ans<<endl;
    }
    return 0;
}