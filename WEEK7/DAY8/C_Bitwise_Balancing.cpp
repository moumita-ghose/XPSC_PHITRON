#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll b,c,d;
        cin>>b>>c>>d;
        // cout<<__lg(100000000000000000000)<<endl;
        vector<ll>vb(64,0);
        vector<ll>vc(64,0);
        vector<ll>vd(64.0);
        vector<ll>va(64,0);
        for(int i=0;i<64;i++){
            // cout<<((b>>i)&1)<< " ";
            int x = ((b>>i)&1);
            vb[i]=x;
        }
        for(int i=0;i<64;i++){
            // cout<<((b>>i)&1)<< " ";
            int x = ((c>>i)&1);
            vc[i]=x;
        }
        for(int i=0;i<64;i++){
            // cout<<((b>>i)&1)<< " ";
            int x = ((d>>i)&1);
            vd[i]=x;
        }

        // for(int i=0;i<64;i++){
        //     if(vd[i]==0 && vb[i]==0){
        //         va[i]=0;
        //     }else if(vd[i]==1 && vb[i]==0){
        //         va[i]=1;
        //     }else if(vd[i]==1 && vb[i]==1){
        //         va[i]=0;
        //     }else if(vd[i]=0 && vb[i]==1){
        //         if(vc[i]==0){
        //             va[i]=1;
        //         }else if(vc[i]==1){
        //             va[i]=0;
        //         }
        //     }
        // }
        // // cout<<"vb -> ";  
        // // for(int i=0;i<64;i++){
        // //      cout<<vb[i]<<" ";
        // // }
        // // cout<<endl<<"vd -> ";
        // // for(int i=0;i<64;i++){
        // //     cout<<vd[i]<<" ";
        // // } 
        // // cout<<endl<<"va -> ";
        // // for(int i=0;i<64;i++){
        // //     cout<<va[i]<<" ";
        // // }      
        // // cout<<endl<<endl; ;
        // ll ans =0;
        // for(int i=0;i<64;i++){
        //     if(va[i]==1){
        //         ll x = pow(2,i);
        //         ans=ans+x;
        //     }
        // }
        // ll a = ans;
        // if( ((a|b) -(a&c))==d )
        //     cout<<ans<<endl;
        // else    
        //     cout<<-1<<endl;

        // cout<<endl;

        for(int i=0;i<64;i++){
            int x =0,y=1;
            //x=0
            if(( (x|vb[i] ) - (x&vc[i]) ) ==vd[i]){
                va[i]=x;
            }else if(( (y|vb[i]) - (y&vc[i]) ) ==vd[i] ){
                va[i]=y;
            }
        }
        ll ans =0;
        for(int i=0;i<64;i++){
            if(va[i]==1){
                ll x = pow(2,i);
                ans=ans+x;
            }
        }
        ll a = ans;
        if( ((a|b) -(a&c))==d )
            cout<<ans<<endl;
        else    
            cout<<-1<<endl;

    }
    return 0;
}