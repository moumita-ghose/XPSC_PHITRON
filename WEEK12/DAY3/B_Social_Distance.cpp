#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int pep,chair;
        cin>>pep>>chair;
        vector<int>v(pep);
        for(int i=0;i<pep;i++){
            cin>>v[i];
        }  
        sort(v.begin(),v.end());
        vector<long long int>cpy(pep);
        cpy[0]=(v[0]*2)+1;
        for(int i=1;i<pep-1;i++){
            int sum = abs(v[i-1]-v[i])+1+v[i];
            cpy[i]=cpy[i-1]+sum;
        }
        cpy[pep-1]=cpy[pep-2] + ( abs(v[pep-1]-v[pep-2])+v[pep-1] ) ;
        
        // for(int i=0;i<cpy.size();i++){
        //     cout<<cpy[i]<<" ";
        // }
        // cout<<endl<<endl;
        if(cpy[pep-1]<=chair){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}