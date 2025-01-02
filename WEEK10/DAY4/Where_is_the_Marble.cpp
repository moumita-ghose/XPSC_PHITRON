#include<bits/stdc++.h>
using namespace std;

int main()
{
   int cnt=0;
    while(1){
        int n,q;
        cin>>n>>q;
        if(n==0 && q==0)
        {
            break;
        }
        cnt++;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
        sort(v.begin(),v.end());

        // for(int i=0;i<n;i++){
        //     cout<<v[i] <<" ";
        // }
        // cout<<endl<<endl;

        cout<<"CASE# " <<cnt<<":\n";
        for(int i=1;i<=q;i++){
            int key;
            cin>>key;

            
            int l=0,r=n-1,mid;
            int ans =-1;
            while(l<=r){
                mid=(l+r)/2;
                if(v[mid]==key){
                    ans=mid;
                    r=mid-1;
                }else if(v[mid]<key){
                    l=mid+1;
                }else{
                    r=mid-1;      
                }
            }
            if(ans!=-1){
                cout<<key<<" found at "<<ans+1<<endl;
            }else{
                cout<<key<<" not found"<<endl;
            }
        }
    }
    return 0;
}