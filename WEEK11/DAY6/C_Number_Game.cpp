/*
link : https://codeforces.com/problemset/problem/1749/C
*/
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
        for(int i=0;i<n;i++){
            cin>>v[i];
            
        }
     
        auto ok =[&] (ll k)
        {
            multiset<int>ml;
            for(int i=0;i<n;i++){
                ml.insert(v[i]);
            }

            for(int i=1;i<=k;i++){
                int mv = k-i+1;
                if(ml.empty()){
                    return false;
                }
                auto it = upper_bound(ml.begin(),ml.end(),mv);
                if(it==ml.begin()){
                    return false;
                }else{
                    it--;
                    ml.erase(it); // alice;
                }
                if(!ml.empty()){
                    int small=*ml.begin();
                    small=small+mv;
                    ml.erase(ml.begin());
                    ml.insert(small);
                }

            }
            return true;
        };
       
        long long int l=0,r=n,mid,ans;
        while (l<=r)
        {
            mid=(l+r)/2;       
            if(ok(mid)==true){
                ans=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
           
        }
        cout<<ans<<endl;
        
    }

       return 0;
}