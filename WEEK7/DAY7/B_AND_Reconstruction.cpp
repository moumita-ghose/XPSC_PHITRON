/*
https://codeforces.com/contest/1991/problem/B
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>b(n-1);
        for(int i=0;i<n-1;i++){
            cin>>b[i];
        }

        vector<int>a(n);
        a[0]=b[0];

        for(int i=0;i<n-2;i++){
            int Or=(b[i]|b[i+1]);
            a[i+1]=Or;
        }
        a[n-1]=b[n-2];
        // for(int i=)
        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        int bi = 0;
        bool fg = true;
        for(int i=0;i<n-1;i++){
            if((a[i]&a[i+1]) != b[bi]){
                fg = false;
                break;
            }
            bi++;
        }

        if(fg==false){
            cout<<-1<<endl;
        }else{
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}