/*
link https://vjudge.net/contest/669017#problem/D
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string gs = "Timur";
        sort(gs.begin(),gs.end());
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n!=gs.size()){
            cout<<"NO\n";
        }else{
            sort(s.begin(),s.end());
            if(s==gs){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}