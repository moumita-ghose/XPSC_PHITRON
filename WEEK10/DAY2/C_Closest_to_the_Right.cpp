#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    while(k--)
    {
        int key;
        cin>>key;
        int l=0,r=n-1;
        int ans=n;
      
        while(l<=r){
            int mid = (l+r)/2;
            if(v[mid]>=key){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}