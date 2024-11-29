/*
https://codeforces.com/problemset/problem/1922/A
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
        string a,b,c;
        cin>>a>>b>>c;
        
        bool flag = false;

        for(int i=0;i<n;i++){
            if(a[i]!=c[i] && b[i] != c[i]){
                flag = true;
                break;
            }
        }
        // cout<<T<<" -> C -> "<<C<<endl;
        if(flag== true){
            cout<<"YES\n";
        }else {
            cout<<"NO\n";
        }
        // cout<<T<<endl;
        // if(T==capitalC){
        //     cout<<"YES\n";
        // }else{
        //     cout<<"NO\n";
        // }

    }
    return 0;
}