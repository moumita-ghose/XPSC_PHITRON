/*
link : https://codeforces.com/problemset/problem/1256/A
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int  a,b,n,s;
        cin>>a>>b>>n>>s;
        if(n*a+b<s){
            cout<<"NO\n";
        }else{
            long long int div = (s/n) * n ;
            // cout<<div<<endl;//<<endl;
            long long int dif = s-div;
            // cout<<"DIF = "<<dif<<endl;
            if(dif==0){
                cout<<"YES\n";
            }else{
                long long int d = dif+b;
                // cout<<"d = "<<d<<endl<<endl;
                if(div+b>=s){
                    cout<<"YES\n";
                }else{
                    cout<<"NO\n";
                }
            }
        }
    }
    return 0;
}