/*
link : https://codeforces.com/problemset/problem/1875/A
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int a,b,n;
        cin>>a>>b>>n;
        vector<long long int>v(n);

        for(long long int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        long long sum =b;
        for(long long int i=0;i<n;i++){
            
            if(a>v[i]){
                sum +=v[i];
            }else{
                sum+=(a-1);
            }
                  
        }
        cout<<sum<<endl;
    }

    return 0;
}