#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    while(q--){
        int key ;
        cin>>key;
        int ans = -1;
        int l =0,r=n-1;
        while (l<=r)
        {
            /* code */
            int mid= (l+r)/2;

            if(v[mid]<=key){
                ans=mid;
                l=mid+1;
            }else if( v[mid]> key){
                r=mid-1;
            }
        }
        
        cout<<ans+1<<endl;
        
    }
    return 0;
}