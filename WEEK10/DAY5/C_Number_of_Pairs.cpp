/*
https://codeforces.com/problemset/problem/1538/C
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,r,l;
        cin>>n>>l>>r;

        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll ans =0;

        sort(v.begin(),v.end());
        for(int i=n-1;i>=0;i--){
            int cur = v[i];
            int low = l-cur;
            int hi = r-cur;
            // for low
            int llow =0, rlow =i-1;
            int lowind=-1;
            while(llow<=rlow){
                int mid = (llow+rlow)/2;
                if(v[mid]>=low){
                    lowind = mid;
                    rlow=mid-1;
                }else{
                    llow=mid+1;
                }
            }


            //for high
            int hiind =-1,lhi =lowind,rhi = i-1; 
            if(lowind!=-1){
               
                while(lhi<=rhi){
                    int mid = (lhi+rhi)/2;
                    if(v[mid]<=hi ){
                        hiind = mid;
                        lhi= mid+1;
                    }else{
                        rhi=mid-1;
                    }
                }
            }
            
            if(hiind!=-1 && lowind!=-1){
                ans=ans+( abs(hiind - lowind) + 1 )  ;
            }

            // cout<<v[i]<<" -> lowind -> "<<lowind<<" -> hiind ->"<<hiind<<endl;

        }
        cout<<ans<<endl;
        // cout<<endl<<endl;;
    }
    return 0;
}