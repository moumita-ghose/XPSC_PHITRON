#include<bits/stdc++.h>
using namespace std;

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

        int zero =0,nonzero = 0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                zero++;
            }else{
                nonzero++;
            }
        }
        if(zero==0){
            cout<<0<<endl;
        }else{
            if(zero-1<=nonzero){
                cout<<0<<endl;
            }else{
                int mx = *max_element(v.begin(),v.end());
                if(mx==1)
                {
                    cout<<2<<endl;
                }else{
                    cout<<1<<endl;
                }
            }
        }

    }

    return 0;
}