/*
https://codeforces.com/problemset/problem/1768/B
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int c=0,sblen=0;
        for(int i=0;i<n;i++){
            if(v[i]==c+1){
                 c++;     
                sblen++;
            }
           
        }
        int extra = n-sblen;
        if(extra%k==0) cout<<extra/k<<"\n" ;
        else cout<<(extra/k)+1<<"\n";
        // cout<< sblen <<endl;
    }

    return 0;
}