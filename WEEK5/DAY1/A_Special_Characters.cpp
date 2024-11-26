/*
https://codeforces.com/problemset/problem/1948/A
*/
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
        if(n%2==0){
            cout<<"YES\n";
            for(int i=1;i<=n/2;i++){
                if(i%2==1)
                    cout<<"AA";
                else    
                    cout<<"BB";
            }
            cout<<endl;
        }else{
            cout<<"NO\n";
        }
        
    }
    return 0;
}