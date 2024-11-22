#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long k;
    cin>>k;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int l=0,r=0;
    long long ans =0;
    multiset< long long int>ml;
    while(r<n){
        ml.insert(v[r]);
        long long mn=*ml.begin();
        long long mx = *ml.rbegin();
        long long dif=mx-mn;
        if(dif<=k){
            ans+=(r-l+1);
            r++;
        }else{
            while(r<n){
               
                long long MN = *ml.begin();
                long long MX = *ml.rbegin();
                dif=MX-MN;
                if(dif<=k){
                    ans+=(r-l+1);
                    
                    r++;
                    break;
                }
                 ml.erase(ml.find(v[l]));
                 l++;
            }
        }
        
    }
    cout<<ans<<endl;

    return 0;
}