#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=1;i<=k;i++){
        int x ;
        cin>>x;
        int l = 0,r=n-1, mid ;
        bool get = false;
        while(l<=r)
        {
          
           mid= (l+r)/2;
           if(v[mid]==x){
            get=true;
            break;
           }else if(x>v[mid]){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        
        if(get==true){ 
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}